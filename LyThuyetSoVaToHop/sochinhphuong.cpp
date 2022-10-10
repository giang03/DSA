#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll tmp = sqrt(n);
    if(n == tmp*tmp){
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}