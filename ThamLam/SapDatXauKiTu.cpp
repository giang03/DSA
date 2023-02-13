#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    ll sum = 0;
    map <char,int> ma;
    for(int i = 0; i < s.size(); i++){
        ma[s[i]]++;
    }
    priority_queue <int> pq;
    for(auto x : ma){
        pq.push(x.second);
    }
    while(n > 0 && pq.top() > 0){
        n--;
        int a = pq.top();
        pq.pop();
        a--;
        pq.push(a);
    }
    while(!pq.empty()){
        int a = pq.top();
        sum += pow(a,2);
        pq.pop();
    }
    cout << sum << endl;
    return 0;
}