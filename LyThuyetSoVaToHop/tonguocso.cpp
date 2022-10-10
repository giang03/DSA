#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n/i; i++){
        if(n % i == 0){
            sum += i;
            if(i != n/i){
                sum += n/i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}