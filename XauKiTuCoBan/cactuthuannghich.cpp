#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(string s){
    string tmp = s;
    reverse(tmp.begin(),tmp.end());
    return tmp == s;
}

int main(){
    string s; getline(cin,s);
    stringstream ss(s);
    string tmp;
    set <string> se;
    while(ss >> tmp){
        if(check(tmp))
            se.insert(tmp);
    }
    for(string x : se){
        cout << x << ' ';
    }
    return 0;
}