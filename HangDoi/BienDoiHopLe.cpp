#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
bool prime[10005];

void sang(){
    memset(prime,1,sizeof(prime));
    prime[1] = prime[0] = 0;
    for(int i = 1; i <= sqrt(10005); i++){
        if(prime[i])
            for(int j = i*i; j <= 10005; j += i){
                prime[j] = 0;
            }
    }
}

int solve(int s, int t){
    queue <ii> q;
    q.push({s,0});
    set <int> se;
    se.insert(s);
    while(!q.empty()){
        ii top = q.front(); q.pop();
        if(top.first == t) return top.second;
        string tmp = to_string(top.first);
        for(int i = 0; i <= 3; i++){
            char y = tmp[i];
            for(char x : {'0','1','2','3','4','5','6','7','8','9'}){
                if(tmp[i] != x){
                    tmp[i] = x;
                    int val = stoi(tmp);
                    if(val >= 1000 && prime[val]){
                        if(!se.count(val)){
                            q.push({val,top.second + 1});
                            se.insert(val);
                        }
                    }
                }
            }
            tmp[i] = y;
        }
    }
    return -1;
}

int main(){
    sang();
    int n; cin >> n;
    while(n--){
        int s,t; cin >> s >> t;
        cout<< solve(s,t) << endl;
    }
    return 0;
}