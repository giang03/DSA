#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    priority_queue <int,vector<int>,greater<int>> q;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        q.push(x);
    }
    ll tmp = 0 , cnt = 0;
    while(!q.empty()){
        if(q.top() >= tmp){
            cnt++;
            tmp += q.top();
        }
        q.pop();
    }
    cout << cnt << endl;
    return 0;
}