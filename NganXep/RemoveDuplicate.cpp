#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

string check(string s){
    string tmp = "";
    stack <char> st;
    for(int i = 0; i < s.size(); i++){
        if(!st.empty() && st.top() == s[i]){
            st.pop();
        }
        else st.push(s[i]);
    }
    while(!st.empty()){
        tmp += st.top();
        st.pop();
    }
    reverse(tmp.begin(),tmp.end());
    return tmp;
}

int main(){
    string s; cin >> s;
    string tmp = check(s);
    if(tmp.empty()){
        cout << "EMPTY";
    }
    else {
        cout << tmp;
    }
    return 0;
}