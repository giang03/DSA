#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = (1e9 + 7);

int path[4] = {6,2,4,8};

int main(){
    ll n; cin >> n;
    if(n == 0){
        cout << 1 << endl;
    }
    else {
        cout << path[n*3 % 4] << endl;
    }
    return 0;
}