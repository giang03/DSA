#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int prime[100001];

void sang(){
    for(int i = 0; i < 100001; i++){
        prime[i] = i;
    }
    prime[0] = prime[1] = 1;
    for(int i = 2; i <= sqrt(100000); i++){
            for(int j = i*i; j <= 100000; j+= i){
                if(prime[j] == j){
                    prime[j] = i;
                }
            }
    }
}

int main(){
    sang();
    ll n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(prime[i]){
           cout << prime[i] << endl;
        }
    }
    return 0;
}