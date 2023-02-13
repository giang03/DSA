#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> adj[1005];
pair<int,int> pa[1000001];

int main(){
    int n;  cin >> n;
    int a[n][n];
    int m = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 1){
                adj[i+1].push_back(j + 1);
                pa[m].first = i + 1;
                pa[m++].second = j + 1;
            }
        }
    }
    for(int i = 0; i < m; i++){
        cout << pa[i].first << ' ' << pa[i].second << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(),adj[i].end());
    }
    for(int i = 1; i <= n; i++){
        cout << i << " : ";
        for(int x : adj[i]){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}