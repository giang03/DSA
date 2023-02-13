#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int a[1005][1005];
pair <int, pair<int,int>> pa[1000001];

int main(){
    int n; cin >> n;
    int m = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a[i][j] != 0){
                pa[m].first = i;
                pa[m].second.first = j;
                pa[m++].second.second = a[i][j];
            }
        }
    }
    for(int i = 0; i < m; i++){
        cout << pa[i].first << ' ' << pa[i].second.first << ' ' << pa[i].second.second << endl;
    }
    return 0;
}