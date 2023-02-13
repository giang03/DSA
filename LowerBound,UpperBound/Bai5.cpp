#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair <int,pair<int,int>> a, pair <int,pair<int,int>> b){
    if(a.first != b.first)
        return a.first < b.first;
    if(a.second.first != b.second.first)
        return a.second.first < b.second.first;
    return a.second.second < b.second.second;
}

int main(){
    int n; cin >> n;
    pair <int,pair<int,int>> pa[n];
    for(int i = 0; i < n; i++){
        cin >> pa[i].first >> pa[i].second.first >> pa[i].second.second;
    }
    sort(pa,pa+n,cmp);
    for(int i = 0; i < n; i++){
        cout << pa[i].first << ' ' << pa[i].second.first << " " << pa[i].second.second << endl;
    }
    return 0;
}