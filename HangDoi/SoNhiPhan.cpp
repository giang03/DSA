#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    queue <string> q;
    q.push("1");
    while(n--){
        string x = q.front(); q.pop();
        cout << x << ' ';
        q.push(x + "0"); q.push(x + "1");
    }
    return 0;
}
