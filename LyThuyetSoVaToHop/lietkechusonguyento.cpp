#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    map <int,int> ma;
    int cnt[18];
    int i = 17;
    while(n){
        int r = n%10;
        if(r == 2 || r == 3 || r == 5 || r == 7){
            cnt[i--] = r;
            ma[r]++;
        }
        n/=10;
    }
    for(auto it : ma){
        cout << it.first << ' ' << it.second << endl;
    }
    cout << endl;
    for(int j = 0; j < 18; j++){
        if(ma[cnt[j]] != 0){
            cout << cnt[j] << ' ' << ma[cnt[j]] << endl;
            ma[cnt[j]] = 0;
        }
    }
    return 0;
}