#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll crossSum(int a[], int l, int m, int r){
    ll left = LLONG_MIN;
    ll sum = 0;
    for(int i = m; i >= l; i--){
        sum += a[i];
        if(sum > left) left = sum;
    }
    sum = 0;
    ll right = LLONG_MIN;
    for(int i = m +1; i<= r; i++){
        sum += a[i];
        right = max(right,sum);
    }
    return max({left,right,left + right});
}

ll solve(int a[], int l, int r){
    if(l > r) return LLONG_MIN;
    if(l == r) return a[l];
    int m = (l + r)/2;
    return max({solve(a,l,m) , solve(a,m + 1, r), crossSum(a,l,m,r)});
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << solve(a,0,n-1) << endl;
    return 0;
}