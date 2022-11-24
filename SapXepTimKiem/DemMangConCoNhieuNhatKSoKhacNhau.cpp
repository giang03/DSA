#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    map <int,int> ma;
    ll ans = 0, cnt = 0, l = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ma[a[i]]++;
        if(ma[a[i]] == 1) cnt++;
        while(cnt > k){
            ma[a[l]]--;
            if(ma[a[l]] == 0) cnt--;
            ++l;
        }
        ans += i - l + 1;
    }
    cout << ans << endl;
    return 0;
}