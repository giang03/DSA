#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];
int person[1005];
int cnt[1005];

void DFS(int u){
    visited[u] = true;
    for(int x : v[u]){
        if(!visited[x]){
            cnt[x]++;
            DFS(x);
        }
    }
}

int main(){
    int k,n,m; cin >> k >> n >> m;
    for(int i = 0; i < k; i++){
        cin >> person[i];
        cnt[person[i]] = 1;
    }
    while(m--){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
    }
    for(int i = 0; i < k; i++){
        memset(visited, false, sizeof(visited));
        DFS(person[i]);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(cnt[i] == k) ans++;
    }
    cout << ans << endl;
    return 0;
}   