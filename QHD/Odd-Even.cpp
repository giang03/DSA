#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    int c = 0, l = 0, ans = 0;
    map <int,int> ma;
    ma[0] = 1;
    while(n--){
        int x; cin >> x;
        if( x % 2) l++;
        else c++;
        ans += ma[l - c];
        ma[l - c]++;
    }
    cout << ans << endl;
    return 0;
}