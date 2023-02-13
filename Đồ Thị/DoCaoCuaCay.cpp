#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];
int height[1005];

void DFS(int u){
    visited[u] = true;
    for(int x : v[u]){
        if(!visited[x]){
            height[x] = height[u] + 1;
            DFS(x);
        }
    }
}

int main(){
    int n; cin >> n;
    for(int i = 1; i < n; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end());
    }
    DFS(1);
    for(int i = 1; i <= n; i++){
        cout << height[i] << ' ';
    }
    return 0;
}   