#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    map <char,int> ma;
    for(int i = 0; i < s.size(); i++){
        ma[s[i]]++;
    }
    int c = 0, l = 0;
    for(auto x : ma){
        if(x.second % 2 == 0) c++;
        else l++;
    }
    int i = 1, ans = 1;
    while(l != 1 && l != 0){
        if(c > 0){
            c--;
            l++;
        }
        else l--;
        if(i % 2 == 0) ans = 1;
        else ans = 2;
        i++;
    }
    cout << ans << endl;
    return 0;
}