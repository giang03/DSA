#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    int c = 0, l = 0;
    for(int &x : a) {
        cin >> x;
        if(x % 2 == 0) c++;
        else l++;
    }
    sort(a,a+n);
    int ok = 1;
    for(int i = 1; i < n; i++){
        if(c % 2 == 0 && l % 2 == 0){
            ok = 0;
            break;
        }
        if(a[i] - a[i - 1] == 1){
            c--; l--;
        }
    }
    if(!ok) cout << "YES"<< endl;
    else cout << "NO";
    return 0;
}