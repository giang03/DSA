#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,s; cin >> n >> s;
    int a[n];
    int cnt = 0,res = 0;
    ll sum = 0;
    for(int &x : a)cin >> x;
    int l = 0;
    for(int r = 0 ; r < n; r++){
        sum += a[r];
        cnt++;
        while(sum > s){
            sum -= a[l++];
            cnt--;
        }
        res = max(res,cnt);
    }
    cout << res << endl;
    return 0;
}