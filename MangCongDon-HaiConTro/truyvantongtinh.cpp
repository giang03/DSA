#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,q; cin >> n >> q;
    ll a[n];
    ll sum = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sum += x;
        a[i] = sum;
    }
    while(q--){
        int x,y;
        cin >> x >> y;
        if(x != 0)
            cout << a[y] - a[x-1] << endl;
        else cout << a[y] << endl;
    }
    return 0;
}