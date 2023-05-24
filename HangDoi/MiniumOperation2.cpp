#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;


int solve(int s){
    queue<ii> q;
    q.push({s,0});
    unordered_map<int,int> se;
    se[s] = 1;
    while(!q.empty()){
        ii top = q.front(); q.pop();
        if(top.first == 1) return top.second;
        for(int i = 2; i <= sqrt(top.first); i++){
            if(top.first % i == 0){
                int x = max(top.first/i,i);
                if(se[x] == 0){
                    q.push({x,top.second + 1});
                    se[x] = 1;
                }
            }
        }
        if(se[top.first - 1] == 0){
            q.push({top.first-1,top.second+1});
            se[top.first-1] = 1;
        }
    }
    return 0;
}

int main(){
    int n; cin >> n;
    while(n--){
        int s; cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}