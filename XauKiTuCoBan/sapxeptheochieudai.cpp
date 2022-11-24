#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main(){
    string s; getline(cin,s);
    stringstream ss(s);
    string tmp;
    vector <string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),cmp);
    for(string x : v){
        cout << x << ' ';
    }
    return 0;
}