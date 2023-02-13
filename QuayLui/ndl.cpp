#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int a[100][100];
int x[100];
bool flag[100];
int c;
int ans, sum = 0;

void khoitao(){
    cin >> n;
    c = 1000;
    ans = 10000;
    for(int i = 1; i <= n; i++){
        flag[i] = true;
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] != 0){
                c = min(c,a[i][j]);
            }
        }
    }
}

void Try(int k){
    for(int i = 2; i <= n; i++){
        if(flag[i]){
            x[k] = i; flag[i] = false;
            sum += a[x[k-1]][x[k]];
            if(k == n){
                ans = min(ans,sum + a[x[k]][1]);
            }
            else if(sum + (n - k + 1)*c < ans){
                Try(k + 1);
            }
            flag[i] = true;
            sum -= a[x[k-1]][x[k]];
        }
    }
}

int main(){
    khoitao();
    x[1] = 1;
    Try(2);
    cout << ans << endl;
    return 0;
}

