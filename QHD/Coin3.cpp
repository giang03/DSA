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
    }
    f[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= s; j++){
            if(j >= a[i]){
                f[j] += f[j - a[i]];
                f[j] %= MOD;
            }
        }
    }
    cout << f[s] << endl;
    return 0;
}