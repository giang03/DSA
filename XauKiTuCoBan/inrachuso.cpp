#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s = ""; 
    char kitu;
    while(cin >> kitu){
        if(kitu != '2' && kitu != '8' &&kitu != 't' &&kitu != 'e' &&kitu != 'c' &&kitu != 'h'){
            s+= kitu;
        }
    }
    if(s.size() == 0){
        cout << "EMPTY";
    }
    else cout << s << endl;
    return 0;
}