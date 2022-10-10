#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f[101][101];

void sang(){
    f[1][1] = 1;
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            if(i == j){
                f[i][j] = 1;
            }
            else if(j == 1) f[i][j] = i;
            else {
                f[i][j] = f[i-1][j-1] + f[i-1][j];
                f[i][j] %= (int)1e9+7;
            }
        }
    }
}

int main(){
    sang();
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == i || j == 0){
                cout << 1 << ' ';
            }
            else cout << f[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}