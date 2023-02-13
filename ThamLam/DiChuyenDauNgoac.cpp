#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    stack <char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else st.push(s[i]);
        }
    }
    cout << st.size()/2 << endl;
    return 0;
}