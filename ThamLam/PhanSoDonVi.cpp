#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solution(ll a, ll b){
    if(a == 0 || b == 0) return;
    if(b % a == 0){
        cout << "1/" << b/a;
        return;
    }
    if(a % b == 0){
        for(int i = 0; i < a/b; i++){
            cout << "1/1";
            if(i != a/b - 1){
                cout << " + ";
            }
        }
        return;
    }
    if(a > b){
        for(int i = 0; i < a/b; i++){
            cout << "1/1 + ";
        }
        solution(a % b, b);
        return;
    }
    ll x = b/a + 1;
    cout << "1/" << x << " + ";
    solution(a * x - b, b * x);
}

int main(){
    ll p,q; cin >> p >> q;
    solution(p,q);
    return 0;
}