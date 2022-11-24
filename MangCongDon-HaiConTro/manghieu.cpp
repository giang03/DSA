#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n],d[n];
    for(int &x : a) cin >> x;
    d[0] = a[0];
    for(int i = 1; i < n ; i++){
        d[i] = a[i] - a[i-1];
    }
    for(int x : d) cout << x << ' ';
    return 0;
}