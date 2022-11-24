#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,s; cin >> n >> s;
    int a[n];
    int cnt = 0,res = INT_MAX;
    ll sum = 0;
    for(int &x : a)cin >> x;
    int l = 0,ok = 1;
    for(int r = 0 ; r < n; r++){
        sum += a[r];
        cnt++;
        if(sum >= s){
            ok = 0;
            while(sum >= s){
                res = min(res,cnt);
                sum -= a[l++];
                cnt--;
            }
        }
    }
    if(!ok)
        cout << res << endl;
    else cout << -1 << endl;
    return 0;
}