#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool solve(int a[], int l, int r, int k){
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == k){
            return true;
        }
        else if(a[m] > k) r = m - 1;
        else l = m + 1;
    }
    return false;
}

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    if(solve(a,0,n-1,k)){
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}