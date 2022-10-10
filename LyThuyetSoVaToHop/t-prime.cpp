#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool prime[10000001];

void sang(){
    for(int i = 0; i < 10000001; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(10000000); i++){
        for(int j = i*i; j <= 10000001; j+= i){
            prime[j] = 0;
        }
    }
}

int main(){
    sang();
    ll n; cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        if(prime[i]){
            cout << (ll)i*i << ' ';
        }
    }
    return 0;
}