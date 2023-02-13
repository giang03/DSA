#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n],b[n];
    ll sum = 0;
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a,a+n);
    sort(b,b+n);
    for(int i = 0; i < n; i++){
        sum += 1ll*a[i]*b[i];
    }
    cout << sum << endl;
    return 0;
}