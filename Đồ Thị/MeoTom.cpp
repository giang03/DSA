#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,m;
vector <int> v[1005];
bool ok[1001];
int ans = 0;

void DFS(int u, int cnt, int pre){
    if(cnt > m) return;
    if(v[u].size() == 1 && u != 1){
        ans++;
        return;
    } 
    for(int x : v[u]){
        if(x != pre){
            if(ok[x]){
                DFS(x,cnt+1,u);
            }
            else DFS(x,0,u);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> ok[i];
    }
    for(int i = 1; i < n; i++){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1,ok[1],0);
    cout << ans << endl;
    return 0;
}