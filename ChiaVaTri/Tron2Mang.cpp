#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

void solve(int a[], int b[], int n, int m, int k){
    int cnt = 1;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            if(cnt == k){
                cout << a[i];
                return;
            }
            i++;
        }
        else {
            if(cnt == k){
                cout << b[j];
                return;
            }
            j++;
        }
        cnt++;
    }
    while(i < n){
        if(cnt == k){
            cout << a[i];
            return;
        }
        cnt++;
        i++;
    }
    while(j < m){
        if(cnt == k){
            cout << b[j];
            return;
        }
        j++;
    }
}

int main(){
    int n,m,k; cin >> n >> m >> k;
    int a[n],b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    solve(a,b,n,m,k);
    return 0;
}