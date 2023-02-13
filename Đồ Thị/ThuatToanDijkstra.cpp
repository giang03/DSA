#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;
typedef pair<ll,ll> ii;

int n,m,s;
vector <ii> v[1005];

void nhap(){
    cin >> n >> m >> s;
    while(m--){
        int x,y,w; cin >> x >> y >> w;
        v[x].push_back({y,w});
        v[y].push_back({x,w});
    }
}

void dijkstra(int s){
    vector <int> d(n + 1, 1e9);
    priority_queue <ii,vector <ii>, greater<ii>> q;
    d[s] = 0;
    q.push({0,s});
    while(!q.empty()){
        ii top = q.top(); q.pop();
        int w = top.first, i = top.second;
        if(w > d[i]) continue;
        for(ii x : v[i]){
            if(d[x.first] > d[i] + x.second){
                d[x.first] = d[i] + x.second;
                q.push({d[x.first],x.first});
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << d[i] << ' ';
    }
}

int main(){
    nhap();
    dijkstra(s);
    return 0;
}