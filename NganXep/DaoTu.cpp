#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    string s;
    stack <string> st;
    while(cin >> s){
        st.push(s);
    }
    while(!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }
    return 0;
}