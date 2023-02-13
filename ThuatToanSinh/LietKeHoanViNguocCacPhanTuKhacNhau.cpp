#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m;
int a[100];
int ok;

void khoitao(){
    cin >> n;
    set <int> se;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int j = 1;
    for(int x : se){
        a[j++] = x;
    }
    m = se.size();
    a[m+1] = INT_MAX;
    sort(a+1,a+m+1, greater<int>());
}

void next(){
    int i = m;
    while(i >= 1 && a[i] < a[i+1]){
        --i;
    }
    if(i == 0) ok = 0;
    else {
        int j = m;
        while(a[i] < a[j]) --j;
        swap(a[i],a[j]);
        reverse(a + i + 1, a + m + 1);
    }
}

int main(){
    khoitao();
    ok = 1;
    while(ok){
        for(int i = 1; i <= m; i++){
            cout << a[i] << ' ';
        }        
        cout << endl;
        next();
    }
    return 0;
}