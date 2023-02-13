#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,s;
int a[100];
int x[100];
int ans, cnt = 0;
bool ok ;

void khoitao(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a+1, a+n+1,greater<int>());
}

void Try(int k){
    for(int i = 1; i >= 0; i--){
        x[k] = i;
        if(x[k] == 1) cnt++;
        s -= a[k] * x[k];
        if(s == 0){
            ans = min(ans,cnt);
            ok = 0;
        }
        else if(s - a[n] >= 0 && k < n && cnt < ans){
            Try(k + 1);
        }
        s += a[k] * x[k];
        if(x[k] == 1) cnt--;
    }
}

int main(){
    khoitao();
    ans = 100;
    ok = 1;
    Try(1);
    if(ok){
        cout << ans << endl;
    }
    else cout << -1 << endl;
    return 0;
}

