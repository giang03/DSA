#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int merge(int a[], int l, int m, int r){
    vector <int> x(a + l, a + m + 1);
    vector <int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    int ans = 0;
    int n = x.size(), m1 = y.size();
    while(i < n && j < m1){
        if(x[i] <= y[j]){
            a[l++] = x[i++];
        }
        else {
            ans += x.size() - i;
            a[l++] = y[j++];
        }
    }
    while(i < n){
        a[l++] = x[i++];
    }
    while(j < m1){
        a[l++] = y[j++];
    }
    return ans;
}

ll mergeSort(int a[], int l, int r){
    if(l >= r) return 0;
    int m = (l + r)/2;
    ll ans = 0;
    ans += mergeSort(a,l,m);
    ans += mergeSort(a,m + 1, r);
    ans += merge(a,l,m,r);
    return ans;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << mergeSort(a,0,n-1) << endl;
    return 0;
}