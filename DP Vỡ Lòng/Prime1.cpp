#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Mod = (1e9 + 7);

ll prime[1000001];
ll cnt[1000001];

void sang(){
    for(int i = 0; i < 1000001; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 0; i < 1001; i++){
        if(prime[i]){
            for(int j = i*i; j < 1000001; j += i){
                prime[j] = 0;
            }
        }
    }
    for(int i = 0; i < 1000001; i++){
        if(prime[i]){
            cnt[i] = cnt[i-1] + 1;
        }
        else cnt[i] = cnt[i-1];
    }
}

int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << cnt[n] << endl;
    }
    return 0;
}