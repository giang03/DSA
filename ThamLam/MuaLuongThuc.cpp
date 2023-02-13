#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int s,n,m; cin >> s >> n >> m;
    int x = n - n/7;
    int ans = -1;
    while(s * x >= n * m){
        ans = x;
        x--;
    }
    cout << ans << endl;
    return 0;
}