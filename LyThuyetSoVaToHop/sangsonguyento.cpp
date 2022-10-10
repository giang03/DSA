#include <bits/stdc++.h>
using namespace std;

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
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            cout << i << ' ';
        }
    }
    return 0;
}