#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,s;
int w[100], v[100], x[100];
ll ans = 0;

void khoitao(){
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> w[i];
        x[i] = 0;
    }
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
}

ll ghinhankq(){
    ll sum = 0, res = 0;
    for(int i = 0; i < n; i++){
        if(x[i]){
            sum += v[i];
            res += w[i];
        }
    }
    if(res > s) return 0;
    return sum;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == n - 1){
            ans = max(ans,ghinhankq());
        }
        else Try(i + 1);
    }
}

int main(){
    khoitao();
    Try(0);
    cout << ans << endl;
    return 0;
}