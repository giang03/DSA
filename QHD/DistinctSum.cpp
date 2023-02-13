#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int f[sum + 1];
    memset(f, 0, sizeof(f));
    f[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = sum; j >= 0; j--){
            if(f[j - a[i]] == 1){
                f[j] = 1;
            }
        }
    }
    for(int i = 0; i <= sum; i++){
        if(f[i]) cout << i << ' ';
    }
    return 0;
}