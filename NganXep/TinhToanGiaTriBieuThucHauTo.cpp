#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    string s; cin >> s;
    stack <int> st;
    for(char x : s){
        if(isdigit(x)){
            st.push(x - '0');
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if(x == '+') st.push(a + b);
            else if(x == '-') st.push(a-b);
            else if(x == '*') st.push(a*b);
            else if(x == '/') st.push(a/b);
        }
    }
    cout << st.top();
    return 0;
}
