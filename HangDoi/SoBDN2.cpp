#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll ans[505];
vector <string> v;

int main(){
    int t; cin >> t;
    queue <string> q;
    q.push("1");
    while(q.front().size() <= 19){
        string x = q.front(); q.pop();
        v.push_back(x);
        q.push(x + "0"); q.push(x + "1");
    }
    for(int i = 1; i <= 500; i++){
        for(string x : v){
            ll tmp = stoll(x);
            if(tmp % i == 0) {
                ans[i] = tmp;
                break;
            }
        }
    }
    while(t--){
        int n; cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}
