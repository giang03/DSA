#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    sort(a,a+n);
    ll tmp = 1;
    if(n == 1 && a[0] == 0) tmp = 0;
    if(a[0] > 0){
        for(int i = n-1; i >= n-3; i--){
            tmp *= a[i];
        }
    }
    else if(a[n-1] < 0){
        for(int i = 0; i <= 1; i++){
            tmp *= a[i];
        }
    }
    else{
        ll x = a[0]*a[1] > a[n-3]*a[n-2] ? a[0]*a[1] : a[n-3]*a[n-2];
        tmp = x * a[n-1];
    }
    cout << tmp << endl;
    return 0;
}