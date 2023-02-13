#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    cin.ignore(1);
    for(int i = 1; i <= n; i++){
        string s; 
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            int x = stoi(tmp);
            if(x > i){
                cout << i << ' ' << x << endl;
            }
        }
    }
    return 0;
}