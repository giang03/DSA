#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];
int dp[1005];

void DFS(int s, int t){
    visited[s] = true;
    for(int x : v[s]){
        if(!visited[x]){
            dp[t]++;
            DFS(x, t);
        }
    }
}

int main(){
    int n,m; cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1 ; i <= n; i++){
        sort(v[i].begin(),v[i].end());
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS(i, i);
        }
        ans = max(ans,dp[i]);
    }
    cout << ans + 1 << endl;
    return 0;
}   