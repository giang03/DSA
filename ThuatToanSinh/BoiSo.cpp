#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ok;
string s = "";
vector <string> v;
ll a[500];

void solve(){
    for(int i = 1; i <= 300; i++){
        for(string x : v){
            ll tmp = stoll(x);
            if(tmp % i == 0){
                a[i] = tmp;
                break;
            }
        }
    }
}

void sinh(){
    int i = 18;
    while(i >= 0 && s[i] == '8'){
        s[i] = '0';
        i--;
    }
    if(i < 0) ok = 0;
    else s[i] = '8';
}

int main(){
    s = string(19,'0');
    ok = 1;
    while(ok){
        v.push_back(s);
        sinh();
    }
    v.erase(v.begin());
    sort(v.begin(),v.end());
    solve();
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        cout << a[x] << endl;
    }
    return 0;
}