#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    string r = "";
    int cnt = 0;
    for(int i = s.size() -1 ; i >= 0; i--){
        cnt++;
        r += s[i];
        if(cnt % 3 == 0 && i != 0){
            r += ",";
        }
    }
    reverse(r.begin(),r.end());
    cout << r << endl;
    return 0;
}