#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

struct edge{
    int x,y,w;
};

int n,m; 
vector <int> v[100005];
bool visited[100005];
int parent[100005], sz[100005];
vector <edge> E;

void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u){
    if(u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

bool Union(int u, int v){
    u = Find(u); v = Find(v);
    if(u == v) return 0;
    if(sz[u] < sz[v]) swap(u,v);
    sz[u] += sz[v];
    parent[v] = u;
    return 1;
}

void Kruskal(){
    vector<edge> MST;
    ll d = 0;
    sort(E.begin(), E.end(), [](edge a, edge b) -> bool{
        return a.w < b.w;
    });
    for(edge e : E){
        if(MST.size() == n - 1) break;
        if(Union(e.x,e.y)){
            MST.push_back(e);
            d += e.w;
        }
    }
    if(MST.size() < n - 1){
        cout << "IMPOSSIBLE" << endl;
    }
    else cout << d << endl;
}

int main(){
    cin >> n >> m;
    init();
    while(m--){
        int x,y,w; cin >> x >> y >> w; 
        edge e{x,y,w};
        E.push_back(e);
    }
    Kruskal();
    return 0;
}