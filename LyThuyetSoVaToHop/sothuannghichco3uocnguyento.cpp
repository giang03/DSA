#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool tn(int n){
    int tmp = n;
    int sum = 0;
    while(n){
        sum = sum * 10 + n%10;
        n/=10;
    }
    if(tmp == sum) return 1;
    return 0;
}

bool check(int n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            while(n % i == 0){
                n/=i;
            }
        }
    }
    if(n != 1) cnt++;
    if(cnt >= 3) return 1;
    return 0;
}

int main(){
    int a,b; cin >> a >> b;
    bool ok = 1;
    for(int i = a; i <= b; i++){
        if(tn(i) && check(i)){
            cout << i << ' ';
            ok = 0;
        }
    }
    if(ok) cout << -1 << endl;
    return 0;
}