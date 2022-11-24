#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    int l = 0, r = n-1;
    while(l < r){
        ll tmp = a[l] + a[r];
        int x = *lower_bound(a + l + 1, a + r,k - tmp);
        if(tmp + x == k){
            cout << "YES" << endl;
            return 0;
        }
        else if(tmp + x > k){
            r--;
        }
        else l++;
    }
    cout << "NO" << endl;
    return 0;
}