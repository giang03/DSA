#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n; 
int a[100];
bool x[100];

void khoitao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = i;
        x[i] = true;
    }
}

void kq(){
    for(int i = 2; i < n; i++){
        if(abs(a[i] - a[i-1]) == 1 || abs(a[i] - a[i+1]) == 1){
            return;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << endl;
}

void Try(int k){
    for(int i = 1; i <= n; i++){
        if(x[i]){
            a[k] = i;
            x[i] = false;
            if(k == n){
                kq();
            }
            else Try(k + 1);
            x[i] = true;
        }
    }
}

int main(){
    khoitao();
    Try(1);
    return 0;
}