#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int a[200];
bool f[1000000];

int main(){
    int c,n; cin >> c >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    f[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = c; j >= a[i]; j--){
            f[j] = f[j] || f[j - a[i]];
        }
    }
    for(int i = c; i >= 0; i--){
        if(f[i]){
            cout << i;
            return 0;
        }
    }
}