#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

const int maxn = 200005;
int a[maxn],n,t[4*maxn];

void solve(int v,int l, int r){
    if(l == r){
        t[v] = a[l];
    }
    else {
        int m = (l + r)/2;
        solve(2*v,l,m);
        solve(2*v+1,m+1,r);
        t[v] = min(t[2*v],t[2*v+1]);
    }
}

int Query(int v,int tl,int tr,int l,int r){
    if(l > r) return INT_MAX;
    if(l == tl && r == tr){
        return t[v];
    }
    else{
        int tm = (tl + tr)/2;
        return min(Query(2*v,tl,tm,l,min(tm,r)),Query(2*v+1,tm+1,tr,max(l,tm+1),r));
    }
}

void changeSolve(int v,int l,int r,int pos, int val){
    if(l == r){
        if(l == pos) t[v] = val;
    }
    else{
        int m = (l + r)/2;
        if(pos <= m) changeSolve(2*v,l,m,pos,val);
        else changeSolve(2*v+1,m+1,r,pos,val);
        t[v] = min(t[2*v],t[2*v+1]);
    }
}

int main(){
    int q; cin >> n >> q;
    for(int i = 0; i < n; i++) cin >> a[i];
    solve(1,0,n-1);
    while(q--){
        int c,l,r;
        cin >> c >> l >> r;
        if(c == 1){
            changeSolve(1,0,n-1,l-1,r);
        }
        else cout << Query(1,0,n-1,l-1,r-1) << endl;
    }
    return 0;
}