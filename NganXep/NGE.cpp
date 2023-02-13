#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    stack <int> st;
    vector <int> tmp;
    reverse(a, a + n);
    for(int x : a){
        while(!st.empty() && st.top() <= x){
            st.pop();
        }
        if(!st.empty() && st.top() > x){
            tmp.push_back(st.top());
        }
        else tmp.push_back(-1);
        st.push(x);
    }
    reverse(tmp.begin(),tmp.end());
    for(int x : tmp){
        cout << x << ' ';
    }
    return 0;
}
