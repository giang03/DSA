#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <string> v;
string s;
int n, ok;

void next(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '8'){
        s[i] = '6';
        --i;
    }
    if(i < 0) ok = 0;
    else s[i] = '8';
}

void khoitao(){
    for(int i = 1; i <= 15; i++){
        ok = 1; 
        n = i;
        s = string(n,'6');
        while(ok){
            string t = s;
            reverse(t.begin(), t.end());
            v.push_back(s + t);
            next();
        }
    }
}

int main(){
    khoitao();
    int x; cin >> x;
    for(int i = 0; i < x; i++){
        cout << v[i] << ' ';
    }
    return 0;
}