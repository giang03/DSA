#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    map <int, int > ma;
    for(int i = 0; i < n; i++){
        if(ma[a[i]] == 0){
            ma[a[i]] = i;
        }
        else {
            if(i - ma[a[i]] <= k){
                cout << "YES" << endl;
                return 0;
            }
            ma[a[i]] = i;
        }
    }
    cout << "NO" << endl;
    return 0;
}