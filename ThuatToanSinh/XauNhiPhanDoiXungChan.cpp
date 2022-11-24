#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <string> v;
string s;
int n, ok;

void next(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        --i;
    }
    if(i < 0) ok = 0;
    else s[i] = '1';
}

void khoitao(){
    for(int i = 1; i <= 15; i++){
        ok = 1; 
        n = i;
        s = string(n,'0');
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
    sort(v.begin(),v.end());
    int x; cin >> x;
    for(int i = 0; i < v.size(); i++){
        if(v[i].size() <= x){
            cout << v[i] << endl;
        }
    }
    return 0;
}