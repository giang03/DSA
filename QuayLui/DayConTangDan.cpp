#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n; 
int a[100];
int x[100];
vector <string> ans;
int cnt = 0;

void khoitao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        x[i] = 0;
    }
}

void kq(){
    vector <int> t;
    for(int i = 1; i <= n; i++){
        if(x[i]){
            t.push_back(a[i]);
        }
    }
    if(t.size() <= 1) return;
    string s = to_string(t[0]) + ' ';
    for(int i = 1; i < t.size(); i++){
        if(t[i] < t[i-1]){
            return;
        }
        s += (to_string(t[i]) + " ");
    }
    s.pop_back();
    ans.push_back(s);
}

void Try(int k){
    for(int j = 1; j >= 0; j--){
        x[k] = j;
        if(k == n){
            kq();
        }
        else Try(k + 1);
    }
}

int main(){
    khoitao();
    Try(1);
    sort(ans.begin(),ans.end());
    for(string v : ans){
        cout << v << endl;
    }
    return 0;
}

