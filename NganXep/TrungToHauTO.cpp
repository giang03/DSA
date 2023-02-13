#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int uutien(char s){
    if(s == '^') return 3;
    if(s == '*' || s == '/') return 2;
    if(s == '+' || s == '-') return 1;
    return 0;
}

int main(){
    string s; cin >> s;
    string res = "";
    stack <char> st;
    for(char x : s){
        if(isalpha(x)){
            res += x;
        }
        else if(x == '(') st.push(x);
        else if(x == ')'){
            while(!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && uutien(st.top()) >= uutien(x)){
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    cout << res << endl;
    return 0;
}
