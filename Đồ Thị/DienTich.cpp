#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,m;
char a[1005][1005];
bool visited[1005][1005];
const int dx[4] = {-1,0,0,1};
const int dy[4] = {0,-1,1,0};
int cnt = 0;

void DFS(int i, int j){
    visited[i][j] = true;
    cnt++;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '.' && !visited[i1][j1]){
            DFS(i1,j1);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[i][j] && a[i][j] == '.'){
                DFS(i,j);
                cout << cnt << ' ';
                cnt = 0;
            }
        }
    }
    return 0;
}   