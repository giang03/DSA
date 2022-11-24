#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n,k; cin >> n >> k;
    int a[n];
    ll sum = 0;
    for(int &x : a) cin >> x;
    int id = 0, cnt = 0, ok = 1, res = n;
    for(int i = 0; i < n; i++){
        sum += a[i];
        cnt++;
        while(sum >= k){
            if(cnt < res){
                res = cnt;
                id = i - cnt + 1;
            }
            sum -= a[i - cnt + 1];
            cnt--;
            ok = 0;
        }
    }
    if(ok) cout << -1 << endl;
    else 
        for(int i = id; i < id + res; i++){
            cout << a[i] << ' ';
        }
    return 0;
}