#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    queue <int> q;
    while(n--){
        int x; cin >> x;
        if(x == 1){
            cout << q.size() << "\n";
        }
        else if(x == 2){
            if(q.empty()) cout << "YES \n";
            else cout << "NO\n";
        }
        else if(x == 3){
            int tmp; cin >> tmp;
            q.push(tmp);
        }
        else if(x == 4){
            if(!q.empty()) q.pop();
        }
        else if(x == 5){
            if(!q.empty()) cout << q.front() << '\n';
            else cout << -1 << '\n';
        }
        else {
            if(!q.empty()) cout << q.back() << '\n';
            else cout << -1 << endl;
        }
    }
    return 0;
}
