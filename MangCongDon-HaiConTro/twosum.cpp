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
        if(a[l] + a[r] == k){
            cout << "YES" << endl;
            return 0;
        }
        else if(a[l] + a[r] < k){
            l++;
        }
        else r--;
    }
    cout << "NO" << endl;
    return 0;
}