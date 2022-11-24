#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m;
int w[100] , v[100], x[100];
pair <int,int> pa[100];
int s = 0, b = 0;
int ans = 0;

bool cmp(pair <int,int> a, pair <int,int> b){
    return (double)a.second/a.first > (double)b.second/b.first;
}

void khoitao(){
    cin >> n >> m;
    b = m;
    for(int i = 0; i < n; i++){
        cin >> w[i];
        x[i] = 0;
    }
    for(int i = 0; i < n; i++){
        cin >> v[i];
        pa[i].first = w[i]; // khối lượng
        pa[i].second = v[i]; // giá trị
    }
    sort(pa,pa+n,cmp);
}

void Try(int k){
    for(int j = (b/pa[k].first) >= 1 ? 1 : 0; j >= 0; j--){
        x[k] = j;
        s += pa[k].second * x[k];
        b -= pa[k].first * x[k];
        if(k == n - 1){
            ans = max(ans,s);
        }
        else if(((double)s + (double)b/pa[k+1].first * pa[k+1].second) > ans){
            Try(k + 1);
        }
        s -= pa[k].second * x[k];
        b += pa[k].first * x[k];
    }
}

int main(){
    khoitao();
    Try(0);
    cout << ans << endl;
    return 0;
}