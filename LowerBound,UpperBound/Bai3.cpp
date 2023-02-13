#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n,x; cin >> n >> x;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        a.push_back(t);
    }
    if(lower_bound(a.begin(),a.end(),x) != a.end()){
        cout << distance(a.begin(),lower_bound(a.begin(),a.end(),x)) << endl;
    }
    else cout << -1 << endl;
    if(upper_bound(a.begin(),a.end(),x) != a.end()){
        cout << distance(a.begin(),upper_bound(a.begin(),a.end(),x)) << endl;
    }
    else cout << -1 << endl;
    if(lower_bound(a.begin(),a.end(),x) != a.end() && *lower_bound(a.begin(),a.end(),x) == x){
        cout << distance(a.begin(),lower_bound(a.begin(),a.end(),x)) << endl;
    }
    else cout << -1 << endl;
    if(upper_bound(a.begin(),a.end(),x) != a.end() && *(--upper_bound(a.begin(),a.end(),x)) == x){
        cout << distance(a.begin(),--upper_bound(a.begin(),a.end(),x)) << endl;
    }
    else cout << -1 << endl;
    if(lower_bound(a.begin(),a.end(),x) != a.end() && *lower_bound(a.begin(),a.end(),x) == x)
        cout << distance(lower_bound(a.begin(),a.end(),x),upper_bound(a.begin(),a.end(),x));
    else cout << 0;
    return 0;
}