#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a,b; cin >> a >> b;
    int cnt = 0;
    if(b > a) swap(a,b);
    while(a >= 2 && b >= 1){
        cnt++;
        a -= 2;
        b -= 1;
        if(b > a) swap(a,b);
    }
    cout << cnt << endl;
    return 0;
}