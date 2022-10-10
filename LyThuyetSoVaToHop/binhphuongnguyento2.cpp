#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int n){
    int tmp = n;
    for(int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while(n % i == 0){
            cnt++;
            n/=i;
        }
        if(cnt < 2 && cnt != 0) return 0;
    }
    if(n != 1 || n == tmp) return 0;
    return 1;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if( check(i)){
            cout << i << ' ';
        }
    }
    return 0;
}