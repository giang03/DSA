#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string tmp;
    int cnt = 0;
    while(ss >> tmp){
        if(tmp == "28tech") cnt++;
    }
    cout << cnt << endl;
    return 0;
}