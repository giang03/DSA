#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int l = 0, r = n - 1, cnt = 0;
    while(l <= r) {
        int sum = a[r]; --r;
        if(sum < 4){
            while(sum + a[l] <= 4){  
                sum += a[l]; ++l;
            }
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}