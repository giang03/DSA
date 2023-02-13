#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    string s; cin >> s;
    stack <char> st;
    for(char x : s){
        if(x == '(') st.push(x);
        else if(!st.empty() && (x == '+' || x == '-' || x == '*' || x == '/')){
            st.pop();
            st.push(x);
        }
        else if(!st.empty() && st.top() != '(' &&  x == ')'){
            st.pop();
        }
        else if(x == ')') st.push(x);
    }
    if(st.empty()) cout << "NO";
    else cout << "YES";
    return 0;
}
