#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = (1e9 + 7);

int main(){
    int n; cin >> n;
    cout << 0 << endl;
    for(int i = 2; i <= n; i++){
        cout << 1ll*i*i*(i*i-1)/2 - 4 *(i-1)*(i-2) << endl;
    }
    return 0;
}