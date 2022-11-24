#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[10001], n , k;

bool check(double res){
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += (ll)floor(a[i]/res);
    }
    return cnt >= k;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    double l = 0;
    double r = accumulate(a,a+n,(double)0);
    double res;
    for(int i = 0; i < 100; i++){
        double m = (l + r) / 2;
        if(check(m)){
            res = m;
            l = m;
        }
        else r = m;
    }
    cout << fixed << setprecision(6) << res << endl;
    return 0;
}