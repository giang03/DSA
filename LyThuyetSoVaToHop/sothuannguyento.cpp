#include <bits/stdc++.h>
using namespace std;

bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

bool check(int n){
    int sum = 0;
    while(n){
        int r = n%10;
        if(r != 2 && r != 3 && r != 5 && r != 7)
            return 0;
        sum += r;
        n/=10;
    }
    return nt(sum);
}

int main(){
    int a,b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(check(i) && nt(i))
            dem++;
    }
    cout << dem << endl;
    return 0;
}