#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a = 0, b = 0;
    bool ok = 0;
    for(int i = 0; i < n; i++){
        int x = (n - 4 * i) / 7;
        if(x < 0){
            break;
        }
        if(7*x + 4 * i == n){
            a = i;
            b = x;
            ok = 1;
            break;
        }
    }
    for(int i = 0; i < a; i++){
        cout << "4";
    }
    for(int i = 0; i < b; i++){
        cout << "7";
    }
    if(!ok) cout << -1 << endl;
    return 0;
}