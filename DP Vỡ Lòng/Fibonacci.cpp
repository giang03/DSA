#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Mod = (1e9 + 7);

ll fb[1000001];

void sang(){
    fb[0] = 0; fb[1] = 1;
    for(int i = 2; i < 1000001; i++){
        fb[i] = fb[i-1] + fb[i-2];
        fb[i] %= Mod;
    }
}

int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fb[n] << endl;
    }
    return 0;
}