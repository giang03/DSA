#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int uocnt(int n){
    int tmp = 2;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            tmp = max(tmp,i);
            n/=i;
        }
    }
    tmp = max(tmp,n);
    return tmp;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << uocnt(n) << endl;
    }
    return 0;
}