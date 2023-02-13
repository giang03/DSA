#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    string s; cin >> s;
    stack <string> st;
    for(char x : s){
        if(isalpha(x)){
            st.push(string(1,x));
        }
        else {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string tmp = "(" + b + x + a + ")";
            st.push(tmp);
        }
    }
    cout << st.top();
    return 0;
}
