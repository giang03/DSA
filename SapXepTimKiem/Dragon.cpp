#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair <int,int> a, pair <int,int> b){
    return a.first < b.first;
}

int main(){
    ll s,n; cin >> n >> s;
    pair <int,int> pa[n];
    for(int i = 0; i < n; i++){
        cin >> pa[i].first >> pa[i].second;
    }
    sort(pa,pa+n,cmp);
    for(int i = 0; i < n; i++){
        if(s > pa[i].first){
            s += pa[i].second;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}