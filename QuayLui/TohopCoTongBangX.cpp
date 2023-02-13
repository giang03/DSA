#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,x; 
int a[1000];
int res[1000];
vector<vector<int>> ans;

void khoitao(){
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n +1);
}


void Try(int sum, int i, int pos){
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= x){
            sum += a[j];
            res[i] = a[j];
            if(sum == x){
                vector<int> tmp(res + 1, res + i + 1);
                ans.push_back(tmp);
            }
            else Try(sum, i + 1, j);
            sum -= a[j];
        }
    }
}

int main(){
    khoitao();
    Try(0,1,1);
    if(ans.size() == 0){
        cout << -1 << endl;
        return 0;
    }
    cout << ans.size() << endl;
    for(auto it : ans){
        cout << '{';
        for(int j  = 0; j < it.size(); j++){
            cout << it[j];
            if(j == it.size()-1) cout << "}\n";
            else cout << ' ';
        }
    }
    return 0;
}