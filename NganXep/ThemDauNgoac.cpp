#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int check(string s){
    stack <char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')' ){
            if(!st.empty() && st.top() == '(') st.pop();
            else st.push(s[i]);
        }
    }
    return st.size();
}

int main(){
    string s; cin >> s;
    cout << check(s);
    return 0;
}