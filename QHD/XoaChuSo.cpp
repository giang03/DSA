#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    int cnt = 0;
    while(n){
        string t = to_string(n);
        int x = 0;
        for(int i = 0; i < t.size(); i++){
            int y = t[i] - '0';
            x = max(x, y);
        }
        n -= x;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}