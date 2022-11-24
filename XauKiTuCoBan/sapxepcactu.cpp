#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; getline(cin,s);
    stringstream ss(s);
    string tmp;
    vector <string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(string x : v){
        cout << x << ' ';
    }
    cout << endl;
    reverse(v.begin(),v.end());
    for(string x : v){
        cout << x << ' ';
    }
    return 0;
}