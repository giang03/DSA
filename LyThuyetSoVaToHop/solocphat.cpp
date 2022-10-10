#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll n){
    while(n){
        int r = n%10;
        if(r != 0 && r != 6 && r != 8)
            return 0;
        n/=10;
    }
    return 1;
}

int main(){
    ll n; cin >> n;
    if(check(n)) cout << "1\n";
    else cout << "0\n";
    return 0;
}