#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll f[1000005];

int main(){
    int n,s; cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= s) f[a[i]] = 1;
    }
    for(int i = 1; i <= s; i++){
        for(int j = 0; j < n; j++){
            if(i >= a[j]){
                f[i] += f[i - a[j]];
                f[i] %= MOD;
            }
        }
    }
    cout << f[s] << endl;
    return 0;
}