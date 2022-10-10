#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll n){
    ll res = n;
    int cnt = 0;
    ll sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        int tmp = 0;
        while(n % i == 0){
            tmp++;
            cnt++;
            if(tmp > 1) return 0;
            sum *= i;
            n/=i;
        }
    }
    if(n!= 1){
        sum *= n;
        cnt++;
    }
    if(cnt > 3 || sum != res) return 0;
    return 1;
}

int main(){
    ll n; cin >> n ;
    cout << check(n) << endl;
    return 0;
}