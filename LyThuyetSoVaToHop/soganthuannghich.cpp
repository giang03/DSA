#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = (1e9 + 7);

bool check(ll n){
    int a = n%10;
    n/=10;
    ll tmp = 0, res = 0;
    while(n > 9){
        tmp = tmp*10 + n%10;
        n/=10;
    }
    int c = n%10;
    ll ans = tmp;
    while(tmp){
        res = res*10 + tmp%10;
        tmp/=10;
    }
    if((a*2 == c || a == c*2) && ans == res){
        return 1;
    }
    return 0;
}

int main(){
    ll n; cin >> n;
    if(check(n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}