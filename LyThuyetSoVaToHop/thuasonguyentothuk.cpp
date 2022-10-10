#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int thuaso(int n, int k){
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            dem++;
            if(dem == k) return i;
            n/=i;
        }
    }
    if(n != 1){
        dem++;
        if(dem == k) return n;
    }
    return -1;
}

int main(){
    int n,k; cin >> n >> k;
    cout << thuaso(n,k) << endl;
    return 0;
}