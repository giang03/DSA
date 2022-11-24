#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    map <char,int> ma;
    for(int i = 0; i < s.size(); i++){
        if(ma[s[i]] == 1){
            cout << s[i] << endl;
            return 0;
        }
        ma[s[i]] = 1;
    }
    cout << "NONE" << endl;
    return 0;
}