#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    sort(s.begin(),s.end());
    while(s[0] == '0' && s.size() > 1){
        s.erase(0,1);
    }
    cout << s << endl;
    return 0;
}