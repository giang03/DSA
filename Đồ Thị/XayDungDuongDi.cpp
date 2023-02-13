#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];

void DFS(int s){
    visited[s] = true;
    for(int x : v[s]){
        if(!visited[x]){
            DFS(x);
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
    vector <int> ans;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ans.push_back(i);
            DFS(i);
        }
    }
    cout << ans.size() - 1 << endl;
    for(int i = 1; i < ans.size(); i++){
        cout << ans[i-1] << ' ' << ans[i] << endl;
    }
    return 0;
}   