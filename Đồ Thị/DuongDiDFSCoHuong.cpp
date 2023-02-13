#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
bool visited[1005];
int parent[1005];


void DFS(int s){
    visited[s] = true;
    for(int x : v[s]){
        if(!visited[x]){
            parent[x] = s;
            DFS(x);
        }
    }
}

int main(){
    int n,m,s,t; cin >> n >> m >> s >> t;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end());
    }
    DFS(s);
    if(visited[t]){
        stack <int> q;
        while(t != s){
            q.push(t);
            t = parent[t];
        }
        cout << s << ' ';
        while(!q.empty()){
            cout << q.top() << ' ';
            q.pop();
        }
    }
    else cout << -1;
    return 0;
}