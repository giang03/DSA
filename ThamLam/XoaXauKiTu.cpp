#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    priority_queue <int> q;
    int tmp = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            tmp += 1;
        }
        else {
            if(tmp != 0){
                q.push(tmp);
                tmp = 0;
            }
        }
    }
    if(tmp != 0){
        q.push(tmp);
    }
    int ans = 0;
    while(!q.empty()){
        ans += q.top();
        q.pop();
        if(!q.empty()) q.pop();
    }
    cout << ans << endl;
    return 0;
}