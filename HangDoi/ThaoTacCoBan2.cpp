#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    queue <int> q;
    while(n--){
        string s; cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            q.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty()) cout << q.front() << endl;
            else cout << "NONE\n";
        }
        else{
            if(!q.empty()) q.pop();
        }
    }
    return 0;
}
