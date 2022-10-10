#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = (1e9 + 7);

int main(){
    ll n; cin >> n;
    if(n % 2 == 0){
        cout << n/2 << endl;
    }
    else cout << - (n/2 + 1) << endl;
    return 0;
}