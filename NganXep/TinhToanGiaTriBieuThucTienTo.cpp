#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    string s; cin >> s;
    stack <int> st;
    for(int i = s.size() - 1; i >= 0; i--){
        if(isdigit(s[i])){
            st.push(s[i] - '0');
        }
        else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            if(s[i] == '+') st.push(a + b);
            else if(s[i] == '-') st.push(a-b);
            else if(s[i] == '*') st.push(a*b);
            else if(s[i] == '/') st.push(a/b);
        }
    }
    cout << st.top();
    return 0;
}
