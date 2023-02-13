#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int solve(int a[], int n,int x){
    int l = 0, r = n-1;
    int pos = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] <= x){
            pos = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return pos;
}

int main(){
    int n,x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    int pos = solve(a,n,x);
    if(pos != -1) cout << a[pos] << endl;
    else cout << pos << endl;
    return 0;
}