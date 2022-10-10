#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while(n % i == 0){
            cnt++;
            n/=i;
        }
        if(cnt != 0){    
            cout << i << "^" << cnt ;
            if(n != 1) cout << " * ";
        }
    }
    if(n != 1) cout << n << "^" << 1 << endl;
    return 0;
}