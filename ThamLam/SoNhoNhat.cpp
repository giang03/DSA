#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int s,d; cin >> s >> d;
    if((double)s/d > 9){
        cout << -1 << endl;
        return 0;
    }
    s--;
    int a[d];
    memset(a,0,sizeof(a));
    int j = 0;
    while(s){
        if(s > 9){
            a[j++] = 9;
            s -= 9;
        }
        else {
            a[j++] = s;
            s = 0;
        }
    }
    for(int i = j; i < d - 1; i++){
        a[i] = 0;
    }
    a[d-1]++;
    for(int i = d - 1; i >= 0; i--){
        cout << a[i];
    }
    return 0;
}