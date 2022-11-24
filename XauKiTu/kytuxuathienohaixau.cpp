#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string a,b; cin >> a >> b;
    set <char> hop;
    map <char,int> giao;
    for(int i = 0; i < a.size(); i++){
        hop.insert(a[i]);
        giao[a[i]] = 1;
    }
    for(int i = 0; i < b.size(); i++){
        hop.insert(b[i]);
        if(giao[b[i]] == 1){
            giao[b[i]] = 2;
        }
    }
    for(auto x : giao){
        if(x.second == 2){
            cout << x.first;
        }
    }
    cout << endl;
    for(auto it = hop.begin(); it != hop.end(); it++){
        cout << *it;
    }
    return 0;
}