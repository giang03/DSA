#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll giaithua(int k){
    ll tmp = 1;
    for(int i = 2; i < k; i++){
        tmp *= i;
    }
    return tmp;
}

int main(){
    int n,k1,k2,k3,k4;
    cin >> n >> k1 >> k2 >> k3 >> k4;
    return 0;
}