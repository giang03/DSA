#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

string check(string s,int k){
    string tmp = "";
    stack <char> st;
    for(char x : s){
        if(st.size() < k - 1 || (!st.empty() && st.top()!= x)){
            st.push(x);
        }
        else if(!st.empty() && st.top() == x){
            int cnt = 1;
            while(!st.empty() && st.top() == x && cnt <= k){
                cnt++;
                st.pop();
            }
            if(cnt != k){
                for(int i = 0; i < cnt; i++){
                    st.push(x);
                }
            }
        }
    }
    while(!st.empty()){
        tmp += st.top();
        st.pop();
    }
    reverse(tmp.begin(),tmp.end());
    return tmp;
}

int main(){
    string s;
    int k; 
    cin >> s >> k;
    string tmp = check(s,k);
    if(tmp.empty()){
        cout << "EMPTY";
    }
    else {
        cout << tmp;
    }
    return 0;
}