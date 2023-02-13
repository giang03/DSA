#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool nt(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

bool a[100000001];

int main(){
    int n; cin >> n;
    if(nt(n)){
        cout << "NO";
        return 0;
    }
    int cnt = 0;
    memset(a,true,sizeof(a));
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cnt++;
            n /= i;
            a[i] = false;
        }
    }
    if(cnt > 2 || (cnt > 1 && n != 1 && a[n])) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}