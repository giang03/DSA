#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,m; 
vector <int> v[100005];
bool visited[100005];
int parent[100005], sz[100005];
int maxsz = 0;

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
    if(sz[u] < sz[v]){
        swap(u, v);
    }
    sz[u] += sz[v];
    parent[v] = u;
    maxsz = max({maxsz, sz[u],sz[v]});
    return 1;
}

int main(){
    cin >> n >> m;
    init();
    while(m--){
        int x,y; cin >> x >> y;
        if(Union(x,y)){
            n--;
        }
        cout << n << ' ' << maxsz << endl;
    }
    return 0;
}