#include <bits/stdc++.h>
using namespace std;

int find(int in[], int n, int x) {
    for (int i=0;i<n;i++) {
        if (in[i] == x) return i;
    }
    return -1;
}

void solve(int in[], int pre[], int n) {
    int search = find(in, n, pre[0]);
    if (search != 0) {
        solve(in, pre + 1, search);
    }
    if (search != n-1) {
        solve(in + search + 1, pre + search + 1, n - search - 1);
    }
    cout << pre[0] << " ";
}

int main(){
    int n; cin >> n;
    int pre[n], in[n];
    for (int i=0;i<n;i++) {
        cin >> pre[i];
    }
    for (int i=0;i<n;i++) {
        cin >> in[i];
    }
    solve(in, pre, n);
    return 0;
}