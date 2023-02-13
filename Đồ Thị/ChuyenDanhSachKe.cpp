#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

vector <int> v[1005];
int main(){
    int n,m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(),v[i].end());
        cout << i << " : ";
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}