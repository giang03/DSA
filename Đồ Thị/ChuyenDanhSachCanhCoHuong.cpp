#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

bool cmp(pair<int,int> a, pair <int,int> b){
    if(a.first != b.first ) 
        return a.first < b.first;
    return a.second < b.second;
}
pair <int,int> pa[1000001];

int main(){
    int n; cin >> n;
    cin.ignore();
    int m = 0;
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp) {
            int x = stoi(tmp);
            pa[m].first = i; 
            pa[m++].second = x;
        }
    }
    sort(pa, pa + m, cmp);
    for(int i = 0; i < m; i++){
        cout << pa[i].first << ' ' << pa[i].second << endl;
    }
    return 0;
}