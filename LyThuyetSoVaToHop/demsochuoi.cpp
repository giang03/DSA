#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = (1e9 + 7);

ll f[100001][51];

void sang(){
    f[1][1] = 1;
    for(int i = 1; i <= 100000; i++){
        for(int j = 1; j <= 50; j++){
            if(i == j || j == 0){
                f[i][j] = 1;
            }
            else if(j == 1) f[i][j] = i;
            else {
                f[i][j] = f[i-1][j-1] + f[i-1][j];
                f[i][j] %= (int)1e9+7;
            }
        }
    }
}

int main(){
    sang();
    string s; cin >> s;
    unordered_set <char> ms;
    for(int i = 0; i < s.size(); i++){
        ms.insert(s[i]);
    }
    cout << f[s.size()][ms.size()] << endl;
    return 0;
}