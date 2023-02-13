#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    vector<int> v;
    for(int &x : a) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++){
        if(a[i] != v[i] && a[i] != v[n-i-1]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}