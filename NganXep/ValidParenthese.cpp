#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

bool check(string s){
    stack <char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else if(!st.empty() && s[i] == ')' ){
            if(st.top() == '(') st.pop();
            else return 0;
        }
        else if(!st.empty() && s[i] == '}' ){
            if(st.top() == '{') st.pop();
            else return 0;
        }
        else if(!st.empty() && s[i] == ']' ){
            if(st.top() == '[') st.pop();
            else return 0;
        }
        else return 0;
    }
    if(st.empty()) return 1;
    return 0;
}

int main(){
    string s; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
    return 0;
}