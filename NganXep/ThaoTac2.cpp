#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


int main(){
    int n; cin >> n;
    stack <int> st;
    while(n--){
        string s; cin >> s;
        if(s == "push"){
            int x; cin >> x;
            st.push(x);
        }
        else if(s == "pop"){
            if(!st.empty()) st.pop();
        }
        else {
            if(st.empty()) cout << "NONE";
            else cout << st.top();
            cout << endl;
        }
    }
    return 0;
}