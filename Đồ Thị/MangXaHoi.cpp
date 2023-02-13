#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];
bool connected[1005][1005];

bool DFS(int s, int pre){
    visited[s] = true;
    for(int x : v[pre]){
        if(x != s && connected[x][s] == 0) return 0;
    }
    for(int x : v[s]){
        if(!visited[x]){
            if(DFS(x,s) == 0) return 0;
        }
    }
    return 1;
}

int main(){
    int n,m; cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        connected[x][y] = 1;
        connected[y][x] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(DFS(i,-1) == 0){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}   