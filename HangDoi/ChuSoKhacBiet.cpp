#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    string tmp = to_string(n);
    map <char,int> ma;
    for(char x : tmp){
        if(!ma[x]) ma[x] = 1;
        else return 0;
    }
    return 1;
}

vector <int> res;

void solve(){
    queue<int> q;
    for(int i = 1; i <= 5; i++) q.push(i);
    while(1){
        int top = q.front(); q.pop();
        res.push_back(top);
        if(top >= 1e5) return;
        int tmp = 0;
        for(int i = 0; i <= 5; i++){
            tmp = top*10 + i;
            if(check(tmp)){
                q.push(tmp);
            }
        }
    }
}

int main(){
    solve();
    int n; cin >> n;
    while(n--){
        int cnt = 0;
        int s,t; cin >> s >> t;
        for(int x : res){
            if(x >= s && x <= t){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}