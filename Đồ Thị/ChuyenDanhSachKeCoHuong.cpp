#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

map <int,set<int>> ma;

int main(){
    int n,m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        ma[x].insert(y);
    }
    for(int i = 1; i <= ma.size(); i++){
        cout << i << " : ";
        for(int x : ma[i]){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}