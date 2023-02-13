#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a, pair <int,int> b){
    if(sqrt(pow(a.first,2) + pow(a.second,2)) != sqrt(pow(b.first,2) + pow(b.second,2)))
        return sqrt(pow(a.first,2) + pow(a.second,2)) < sqrt(pow(b.first,2) + pow(b.second,2));
    if(a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;
}

int main(){
    int n; cin >> n;
    pair <int,int> pa[n];
    for(int i = 0; i < n; i++){
        cin >> pa[i].first >> pa[i].second;
    }
    sort(pa,pa+n,cmp);
    for(int i = 0; i < n; i++){
        cout << pa[i].first << ' ' << pa[i].second << endl;
    }
    return 0;
}