#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    vector <int> v;
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        auto it = lower_bound(v.begin(),v.end(),a[i]);
        if(it == v.end()) v.push_back(a[i]);
        else *it = a[i];
    }
    cout << n - v.size() << endl;
    return 0;
}