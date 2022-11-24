#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            sum += (s[i] - '0');
        }
    }
    cout << sum << endl;
    return 0;
}