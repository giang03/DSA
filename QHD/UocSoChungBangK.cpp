#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        int ans = INT_MAX, cnt = 0;
        for(int x : a){
            if(x%k == 0){
                cnt++;
            }
            else {
                if(cnt > 0) ans = min(cnt,ans);
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}