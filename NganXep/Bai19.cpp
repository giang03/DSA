#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    stack <int> st;
    ll ans = 0;
    int i = 0;
    while(i < n){
        if(st.empty() || a[st.top()] <= a[i]){
            st.push(i); i++;
        }
        else {
            int pos = st.top(); st.pop();
            ll tmp = 0;
            if(st.empty()){
                tmp = 1ll * a[pos] * i;
            }
            else {
                tmp = 1ll * a[pos] * (i - st.top() - 1);
            }
            ans = max(ans,tmp);
        }
    }
    while(!st.empty()){
        int pos = st.top(); st.pop();
        ll tmp = 0;
        if(st.empty()){
            tmp = 1ll * a[pos] * i;
        }
        else {
            tmp = 1ll * a[pos] * (i - st.top() - 1);
        }
        ans = max(ans,tmp);
    }
    cout << ans << endl;
    return 0;
}
