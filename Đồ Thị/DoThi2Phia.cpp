#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,m;
vector <int> v[1005];
int visited[1005];

bool DFS(int s, int pre){
    visited[s] = 1;
    for(int x : v[s]){
        if(visited[x] == 0){
            return DFS(x,s);
        }
        else if(x != pre && visited[x] == 1){
            return 0;
        }
    }
    visited[s] = 2;
    return 1;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        memset(visited,0,sizeof(visited));
        if(DFS(i,-1) == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}