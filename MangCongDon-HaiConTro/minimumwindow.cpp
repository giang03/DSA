#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string x) {
    map <char, int> m;
    for(int i = 0;i < x.size();i++) m[x[i]]++;
    int length = s.size();
    int left = 0, right = 0 , ansLeft = 0, ansRight = 0;
    int counter = x.size();
    bool flag = false;
    string ans = "";
    while(right < s.size()){
        char c = s[right];
        if(m.find(c) != m.end()){
            if(m[c]>0) counter--;
            m[c]--;
        }
        while(counter == 0 && left < right){
            if(right - left + 1 < length){
                length = right-left+1;
                flag = true;
                ansLeft = left;
                ansRight = right;
            }
            c = s[left];
            if(m.find(c) != m.end()){
                m[c]++;
                if(m[c] > 0)counter++;
            }
            left++;
        }
        right++;
    }
    if(!flag)   return "-1";O
    else
        for(int i = ansLeft;i <= ansRight;i++) ans+=s[i];
    return ans;
}
int main(){
   string s,t; cin >> s >> t;
   cout << minWindow(s,t) << endl;
   return 0;
}