#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    int x, y; cin >> x >> y;
    int l = 0,res = 0;
    int demx = 0, demy = 0;
    for(int r = 0; r < s.size(); r++){
        if(s[r] == '2') demx++;
        else demy++;
        while(demx > x || demy > y){
            if(s[l] == '2') demx--;
            else demy--;
            l++;
        }
        res = max(res , r-l+1);
    }
    cout << res << endl;
    return 0;
}