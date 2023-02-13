#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll fibo[100];

void fibonacci(){
    fibo[1] = 1; fibo[2] = 1;
    for(int i = 3; i < 93; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

void Try(ll k, ll n){
    if(n == 1) {
        cout << "A";
        return;
    }
    if(n == 2){
        cout << "B";
        return;
    }
    if(k <= fibo[n - 2]){
        Try(k , n - 2);
    }
    else {
        Try(k - fibo[n - 2], n - 1);
    }
}

int main(){
    fibonacci();
    ll n,k; cin >> n >> k;
    Try(k,n);
    return 0;
}