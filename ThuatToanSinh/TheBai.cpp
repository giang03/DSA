#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,ok;
int a[100];

void khoitao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}

bool check(){
    for(int i = 2; i < n; i++){
        if(abs(a[i] - a[i-1]) == 1 || abs(a[i] - a[i+1]) == 1)
            return 0;
    }
    return 1;
}

void next(){
    int i = n;
    while(i >= 1 && a[i] > a[i+1]) --i;
    if(i == 0) ok = 0;
    else {
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i],a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    khoitao();
    ok = 1;
    while(ok){
        if(check()){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << endl;
        }
        next();
    }
    return 0;
}