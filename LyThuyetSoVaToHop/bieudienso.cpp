#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = (1e9 + 7);

bool check(int n){
	for(int i = 0; i <= n/111; i++){
		int x = (n-111*i)/11;
		if(11*x+111*i==n) return 1;
	}
	return 0;
}

int main(){
    int n; cin >> n;
    if(check(n)) cout << "YES\n"; 
    else cout << "NO\n";
    return 0;
}