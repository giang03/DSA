#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    queue <int> q;
    while(n--){
        string s; cin >> s;
        if(s == "PUSHFRONT"){
            int x; cin >> x;
            if(q.empty()) q.push(x);
            else{
                queue <int> tmp;
                while(!q.empty()){
                    tmp.push(q.front());
                    q.pop();
                }
                q.push(x);
                while(!tmp.empty()){
                    q.push(tmp.front());
                    tmp.pop();
                }
            }
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty()) cout << q.front() << endl;
            else cout << "NONE\n";
        }
        else if(s == "POPFRONT"){
            if(!q.empty()) q.pop();
        }
        else if(s == "PUSHBACK"){
            int x; cin >> x;
            q.push(x);
        }
        else if(s == "PRINTBACK"){
            if(!q.empty()) cout << q.back() << endl;
            else cout << "NONE\n";
        }
        else{
            if(!q.empty()){
                queue <int> tmp;
                while(!q.empty()){
                    int x = q.front(); q.pop();
                    if(!q.empty()) tmp.push(x);
                }
                while(!tmp.empty()){
                    q.push(tmp.front());
                    tmp.pop();
                }
            }
        }
    }
    return 0;
}
