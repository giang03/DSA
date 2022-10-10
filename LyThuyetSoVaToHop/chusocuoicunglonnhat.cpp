#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool prime[10000001];

void sang(){
    for(int i = 0; i < 10000001; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i < sqrt(10000001); i++){
        if(prime[i]){
            for(int j = i*i; j < 10000001; j+= i)
                prime[j] = 0;
        }
    }
}

bool check(int n){
    int a = n%10;
    n /= 10;
    while(n){
        int r = n%10;
        if(r > a) return 0;
        n/=10;
    }
    return 1;
}

int main(){
    sang();
    int n; cin >> n;
    int dem = 0;
    for(int i = 2; i <= n; i++){
        if(prime[i] && check(i)){
            cout << i << ' ';
            dem ++;
        }
    }
    cout << endl << dem << endl;
    return 0;
}