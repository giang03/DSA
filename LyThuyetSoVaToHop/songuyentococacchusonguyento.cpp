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

bool check(int n){
    while(n){
        int r = n%10;
        if(r != 2 && r != 3 && r != 5 && r != 7) 
            return 0;
        n/=10;
    }
    return 1;
}

int main(){
    sang();
    int a,b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(check(i) && prime[i])
            dem++;
    }
    cout << dem << endl;
    return 0;
}