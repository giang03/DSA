#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

const int maxn = 2000005;
int n, a[maxn];
ll t[4*maxn];
void Sum(int v, int l, int r){
    if(l == r){
        t[v] = a[l];
    }
    else {
        int m = (l + r)/2;
        Sum(2*v,l,m);
        Sum(2*v + 1,m + 1,r);
        t[v] = t[2*v]+t[2*v+1];
    }
}

void update(int v, int tl, int tr, int l, int r,int val){
    if(l > r) return;
    if(l == tl && r == tr){
        t[v] += val;
        return;
    } 
    else {
        int tm = (tl + tr)/2;
        update(2*v,tl,tm,l,min(tm,r),val);
        update(2*v+1,tm+1,tr,max(tm+1,l),r,val);
    }
}

ll Query(int v, int l, int r, int u){
    if(l == r) return t[v];
    int m = (l + r)/2;
    if(u <= m) return Query(2*v,l,m,u);
    else return Query(2*v+1,m+1,r,u);
}

int main(){
    int q;
    cin >> n >> q; 
    for(int i = 0; i < n; i++) cin >> a[i];
    Sum(1,0,n-1);
    while(q--){
        int c,l,r,v,u; cin >> c;
        if(c == 1){
            cin >> l >> r >> v;
            update(1,0,n-1,l-1,r-1,v);
        }
        else {
            cin >> u;
            Query(1,0,n-1,u-1);
        }
    }
    return 0;
}