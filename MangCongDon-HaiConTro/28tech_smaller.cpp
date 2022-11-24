#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0;
    int id =0;
    while(i < n && j < m){
        if(b[j] > a[i]){
            i++;
            id++;
        }
        else {
            cout << id << ' ';
            j++;
        }
    }
    while(j < m){
        cout << n << ' ';
        j++;
    }
    return 0;
}