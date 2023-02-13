#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue <string> q;
        stack <string> st;
        q.push("6"); q.push("8");
        while(q.front().size() <= n){
            string x = q.front(); q.pop();
            st.push(x); 
            q.push(x + "6"); q.push(x + "8");
        }
        while(!st.empty()){
            cout << st.top() <<' ';
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
