#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int tcs(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}

bool check(int n){
    int tmp = n;
    int sum = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            sum += tcs(i);
            n/=i;
        }
    }
    if(n == tmp) return 0;
    if(n != 1) sum += tcs(n);
    if(sum == tcs(tmp)) return 1;
    return 0;
}

int main(){
    int n; cin >> n ;
    if(check(n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}