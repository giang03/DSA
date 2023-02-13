#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(int a[], int l, int r){
    int pos = 0;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == 0){
            pos = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return pos;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << solve(a,0,n-1) + 1 << endl;
    return 0;
}