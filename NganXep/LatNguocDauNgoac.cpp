#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

string solve(string s){
    string tmp = "";
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
    while(!st.empty()){
        tmp += st.top();
        st.pop();
    }
    reverse(tmp.begin(), tmp.end());
    return tmp;
}

int solve1(string s){
    int cnt = 0;
    stack <char> st;
    for(char x : s){
        if(!st.empty() && st.top() == x){
            cnt++;
            st.pop();
        }
        else st.push(x);
    }
    cnt += st.size();
    return cnt;
}

int main(){
    string s; cin >> s;
    cout << solve1(solve(s));
    return 0;
}