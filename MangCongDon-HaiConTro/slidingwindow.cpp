#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    ll sum = 0, res = 0;
    int id = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
        res = max(res,sum);
    }
    for(int i = k; i < n; i++){
        sum += a[i];
        sum -= a[i-k];
        if(res < sum){
            res = sum;
            id = i-k + 1;
        }
    }
    cout << res << endl;
    for(int i = 0; i < k; i++){
        cout << a[i+id] << ' ';
    }
    return 0;
}