#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char c;
int k;
char a[100];

void khoitao(){
    cin >> c >> k;
    for(int i = 0; i < k; i++){
        a[i] = 'A';
    }
}

void in(){
    for(int i = 0; i < k; i++){
        cout << a[i];
    }
    cout << endl;
}

void Try(int i){
    for(int j = 0; j < (c - 'A' + 1); j++){
        a[i] += j;
        if(i == k - 1){
            in();
        }
        else Try(i + 1);
        a[i] -= j;
    }
}

int main(){
    khoitao();
    Try(0);
    return 0;
}