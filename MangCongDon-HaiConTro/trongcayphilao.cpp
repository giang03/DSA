#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n,k; cin >> n >> k;
    int a[n];
    int sum = 0;
    for(int &x : a){
        cin >> x;
        sum += x;
    }
    if(sum < k){
        cout << -1 << endl;
    }
    else {
        int res = 0, ans = k;
        for(int i = 0; i < k; i++){
            res += a[i];
        }
        ans = min(k - res,ans);
        for(int i = k; i < n; i++){
            res -= a[i-k];
            res += a[i];
            ans = min(k - res,ans);
        }
        cout << ans << endl;
    }
    return 0;
}