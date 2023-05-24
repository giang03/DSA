#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

const int maxn = 200005;
int a[maxn],n,t[4*maxn];

void buildTree(int v, int l, int r){
    if(l == r){
        t[v] = a[l];
    }
    else {
        int m = (r + l)/2;
        buildTree(2*v,l,m);
        buildTree(2*v+1,m+1,r);
        t[v] = t[2*v]^t[2*v+1];
        
    }
}

int Query(int v,int tl,int tr,int l,int r){
    if(l > r) return 0;
    if(tl == l && tr == r) return t[v];
    else{
        int tm = (tl + tr)/2;
        return Query(2*v,tl,tm,l,min(tm,r)) ^ Query(2*v+1,tm+1,tr,max(tm+1,l),r);
    }
}

int main(){
    int q; cin >> n >> q;
    for(int i = 0; i < n; i++) cin >> a[i];
    buildTree(1,0,n-1);
    while(q--){
        int l,r; cin >> l >> r;
        cout << Query(1,0,n-1,l-1,r-1) << endl;
    }
    return 0;
}