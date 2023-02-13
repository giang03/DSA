#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(pair <int,int> a, pair <int,int> b){
    if(a.second != b.second){
        return a.second < b.second;
    }
    else return a.first < b.first;
}

int main() {
    int n; cin >> n;
    pair <int,int> a[n];
    for(int i = 0; i< n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n,cmp);
    int dem = 1, indx = 0;
    for(int i = 1; i < n; i++){
        if(a[i].first > a[indx].second){
            dem++;
            indx = i;
        }
    }
    cout << dem << endl;
    return 0;
}
