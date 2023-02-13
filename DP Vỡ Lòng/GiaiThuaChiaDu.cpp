#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Mod = (1e9 + 7);

ll a[1000001];

void sang(){
    ll tmp = 1;
    for(int i = 1; i < 1000001; i++){
        tmp *= i;
        tmp %= Mod;
        a[i] = tmp;
    }
}

int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}