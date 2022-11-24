#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; getline(cin,s);
    stringstream ss(s);
    string tmp;
    set <string> se;
    while(ss >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = tolower(tmp[i]);
        }
        se.insert(tmp);
    }
    cout << se.size() << endl;
    return 0;
}