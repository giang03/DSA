#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,b; cin >> a >> b;
    int x = ceil(sqrt(a));
    int y = floor(sqrt(b));
    for(int i = x ; i <= y; i++){
        cout << 1ll*i*i << " ";
    }
    return 0;
}