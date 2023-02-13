#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    string s; cin >> s;
    stack <string> st;
    for(int i = s.size() - 1; i >= 0; i--){
        if(isalpha(s[i])){
            st.push(string(1,s[i]));
        }
        else {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string tmp = a + b + s[i];
            st.push(tmp);
        }
    }
    cout << st.top();
    return 0;
}
