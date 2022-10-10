#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll cnt = 0;
    for(int i = 1; i <= n/i; i++){
        if(n % i == 0){
            cnt ++;
            if(i != n/i){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}