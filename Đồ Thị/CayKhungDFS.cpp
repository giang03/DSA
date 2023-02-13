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
            cout << s << "->" << x << endl;
            DFS(x);
        }
    }
}

int main(){
    int n,m,s; cin >> n >> m >> s;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(), v[i].end());
    }
    DFS(s);
    return 0;
}   