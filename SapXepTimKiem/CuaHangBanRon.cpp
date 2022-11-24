#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    pair <int,int> pa[2*n];
    for(int i = 0; i < 2*n; i++){
        cin >> pa[i].first;
        if(i % 2 == 0){
            pa[i].second = 1;
        }
        else pa[i].second = -1;
    }
    sort(pa,pa+2*n);
    int cnt = 0, ans = 0;
    for(int i = 0; i < 2*n; i++){
        cnt += pa[i].second;
        ans = max (ans,cnt);
    }
    cout << ans << endl;
    return 0;
}