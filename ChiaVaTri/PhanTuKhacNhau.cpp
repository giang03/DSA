#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;



int main(){
    int n; cin >> n ;
    int a[n],b[n-1];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}