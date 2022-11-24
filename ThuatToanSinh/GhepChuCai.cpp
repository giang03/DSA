#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char c;
char a[100];
bool flag[1000];

void khoitao(){
    cin >> c; 
    for(int i = 0; i <= (int)(c - 'A'); i++){
        a[i] = 'A' + i;
        flag[a[i]] = true;
    }
}

bool check(){
    for(int i = 1; i < (int)(c - 'A'); i++){
        if(a[i] == 'A' || a[i] == 'E'){
            if((a[i-1] != 'A' && a[i-1] != 'E') && (a[i + 1] != 'E' && a[i + 1] != 'A'))
                return 0;
        }
    }
    return 1;
}

void in(){
    for(int i = 0; i <= (int)(c - 'A'); i++){
        cout << a[i];
    }
    cout << endl;
}

void Try(int k){
    for(int i = 'A'; i <= c; i++){
        if(flag[i]){
            a[k] = i;
            flag[i] = false;
            if(k == (int)(c - 'A')){
                if(check()) in();
            }
            else Try(k+1);
            flag[i] = true;
        }
    }
}

int main(){
    khoitao();
    Try(0);
    return 0;
}