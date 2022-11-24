#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int a[100]; // Mảng chứa khối lượng quả táo
int x[100]; // Mảng đánh dấu quả táo theo từng nhóm, nhóm 1 là x[i] = 1, nhóm 0 x[i] = 0
ll ans = INT_MAX; // Biến kết quả nhỏ nhất hiệu giữa tổng hai nhóm

void khoitao(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        x[i] = 0;
    }
}

ll ghinhankq(){
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        if(x[i]){
            sum1 += a[i];
        }
        else sum2 += a[i];
    }
    return abs(sum1 - sum2);
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == n){
            ans = min(ghinhankq(),ans);
        }
        else Try(i + 1);
    }
}

int main(){
    khoitao();
    Try(0);
    cout << ans << endl;
    return 0;
}