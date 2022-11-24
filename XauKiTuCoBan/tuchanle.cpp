#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; getline(cin,s);
    stringstream ss(s);
    string tmp;
    int cnt = 0;
    while(ss >> tmp){
        cnt++;
        if(cnt % 2 == 0){
            reverse(tmp.begin(),tmp.end());
        }
        cout << tmp << ' ';
    }
    return 0;
}