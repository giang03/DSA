#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = (1e9 + 7);

ll f[1001][1001] = {1};

void sang(){
    f[1][1] = 1;
    for(int i = 1; i <= 1000; i++){
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0){
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
    int n,m; cin >> n >> m;
    cout << f[n-1][m-1] << endl;
    return 0;
}