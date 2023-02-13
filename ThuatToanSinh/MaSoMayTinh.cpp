#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n; 
int a[100];
char c[100];
int ok;

void khoitao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = 1;
        c[i] = 'A' + i - 1;
    }
}

void next(){
    int i = n;
    while(i >= 1 && a[i] == n){
        --i;
    }
    if(i == 0){
        int j = n;
        while(j >= 1 && c[j] > c[j+1]){
            --j;
        }
        if(j == 0) ok = 0;
        else {
            int l = n;
            while(c[j] > c[l]) --l;
            swap(c[j],c[l]);
            reverse(c + j + 1, c + n + 1);
        }
        for(int i = 1; i <= n; i++){
            a[i] = 1;
        }
    }
    else {
        a[i]++;
        for(int j = i + 1; j <= n; j++){
            a[j] = 1;
        }
    }
}

int main(){
    khoitao();
    ok = 1;
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << c[i];
        }
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
        next();
    }
    return 0;
}