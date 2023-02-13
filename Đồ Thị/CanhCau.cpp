#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];

void DFS(int s, int x, int y){
    visited[s] = true;
    for(int v : v[s]){
        if((v == x && s == y) || (v == y && s == x))
            continue;
        if(!visited[v]){
            DFS(v, x , y);
        }
    }
}

int main(){
    int n,m; cin >> n >> m ;
    pair <int,int> pa[m];
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        pa[i].first = x;
        pa[i].second = y;
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end());
    }
    int res = 0, cnt = 0, ans = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS(i, -1, -1);
            res++;
        }
    }
    for(auto x : pa){
        cnt = 0;
        memset(visited, false, sizeof(visited));
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                DFS(i , x.first, x.second);
                cnt++;
            }
        }
        if(cnt > res){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}