#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int path[10] = {1,2,5,10,20,50,100,200,500,1000};

int main(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 9; i >= 0; i--){
        cnt += n/path[i];
        n %= path[i];
    }
    cout << cnt << endl;
    return 0;
}