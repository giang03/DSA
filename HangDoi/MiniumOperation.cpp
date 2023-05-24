#include <bits/stdc++.h>
using namespace std;

int solve(int s,int t){
    int cnt = 0;
    while(s != t){
        cnt++;
        if(s*2 <= t + 1) s*=2;
        else s--;
    }
    return cnt;
}

int main(){
    int n; cin >> n;
    while(n--){
        int s,t; cin >> s >> t;
        cout << solve(s,t) << endl;
    }
    return 0;
}