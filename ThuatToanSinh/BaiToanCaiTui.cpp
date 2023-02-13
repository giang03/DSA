#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m;
int w[1001] , v[1001], x[1001];
pair <int,int> pa[1001];
ll s = 0, b = 0;
ll ans = 0;

bool cmp(pair <int,int> a, pair <int,int> b){
    return (double)a.second/a.first > (double)b.second/b.first;
}
void khoitao(){
    cin >> n >> m;
    b = m;
    for(int i = 0; i < n; i++){
        cin >> w[i];
        pa[i].first = w[i];
    }
    for(int i = 0; i < n; i++){
        cin >> v[i];
        pa[i].second = v[i];
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