#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    set <int> se;
    int ans = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
        while(se.count(a[i]) != 0){
            se.erase(se.find(a[j]));
            j++;
        }
        se.insert(a[i]);
        ans = max((int)se.size(),ans);
    }
    cout << ans << endl;
    return 0;
}