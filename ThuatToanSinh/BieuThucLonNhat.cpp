#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[5];
int x[5];
ll ans = 0;

void khoitao(){
    for(int i = 0; i < 4; i++){
        cin >> a[i];
        x[i] = 0;
    }
}

ll ghinhankq(){
    ll sum = a[0];
    for(int i = 1; i < 4; i++){
        if(x[i]){
            sum += a[i];
        }
        else sum -= a[i];
    }
    return sum;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == 3){
            ans = max(ghinhankq(),ans);
        }
        else Try(i + 1);
    }
}

int main(){
    khoitao();
    Try(1);
    cout << ans << endl;
    return 0;
}