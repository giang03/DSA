#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s = s.insert(3,"0");
    cout << s << endl;
    return 0;
}