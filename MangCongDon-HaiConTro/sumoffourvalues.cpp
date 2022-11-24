#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    for(int l = 1; l < n; l++){
        int m = 0, r = n - 1;
        while(m < l && l < r){
            int tmp = a[l] + a[m] + a[r];
            int x = *lower_bound(a + l + 1, a + r, k - tmp);
            if(x + tmp == k) {
                cout << "YES" << endl;
                return 0;
            }
            else if(tmp + x > k){
                r--;
            }
            else m++;
        }
    }
    cout << "NO" << endl;
    return 0;
}