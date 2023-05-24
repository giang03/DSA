#include <bits/stdc++.h>
using namespace std;
typedef pair<pair<int,int>,int> iii;
const int dx[8] = {-2,-1,1,2,-1,-2,1,2};
const int dy[8] = {1,2,2,1,-2,-1,-2,-1};
bool flag[10][10];


int solve(int x, int y, int u, int v){
    queue <iii> q;
    memset(flag,0,sizeof(flag));
    q.push({{x,y},0});
    while(!q.empty()){
        iii top = q.front(); q.pop();
        int a = top.first.first, b = top.first.second;
        if(a == u && b == v) return top.second;
        for(int i = 0; i < 8; i++){
            int n = a + dx[i], m = b + dy[i];
            if(n >= 1 && n <= 8 && m >= 1 && m <= 8 && !flag[n][m]){
                flag[n][m] = 1;
                q.push({{n,m},top.second+1});
            }
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int x,y,u,v;
        string s1,s2; cin >> s1 >> s2;
        x = s1[0] - 'a' + 1; y = s1[1] -'0'; u = s2[0] - 'a' + 1; v = s2[1]-'0';
        cout << solve(x,y,u,v) << endl;
    }
    return 0;
}