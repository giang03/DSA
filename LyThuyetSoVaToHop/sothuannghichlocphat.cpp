#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool tn(int n){
    int tmp = n;
    int sum = 0;
    while (n){
        /* code */
        sum = sum*10 + n%10;
        n/=10;
    }
    if(sum == tmp) return 1;
    return 0;
}

bool check(int n){
    int ok = 0, sum = 0;
    while(n){
        int r = n%10;
        if(r == 6){
            ok = 1;
        }
        sum += r;
        n/=10;
    }
    if(ok && sum %10 == 8) return 1;
    return 0;
}

int main(){
    int a,b; cin >> a >> b;
    for(int i =a ; i <= b; i++){
        if(tn(i) && check(i)){
            cout << i << ' ';
        }
    }
    return 0;
}