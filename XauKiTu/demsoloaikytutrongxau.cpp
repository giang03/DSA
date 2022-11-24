#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; getline(cin,s);
    int chu = 0 , so = 0 , db = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            so++;
        }
        else if(isalpha(s[i])){
            chu++;
        }
        else db++;
    }
    cout << chu << ' ' << so << ' ' << db << endl;
    return 0;
}