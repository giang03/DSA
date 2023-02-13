#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
int cnt[1005];

int DFS(int u, int pre){
    int below = 1;
    for(int x : v[u]){
        if(x != pre){
            below += DFS(x,u);
        }
    }
    return cnt[u] = below;
}

int main(){
    int n; cin >> n ;
    for(int i = 1; i < n; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1,0);
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += cnt[i];
    }
    cout << ans << endl;
    return 0;
}   