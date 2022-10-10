#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll dem = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            dem = dem - dem/i;
            while(n % i == 0){
                n/=i;
            }
        }
    }
    if(n != 1) dem = dem - dem/n;
    cout << dem << endl;
    return 0;
}