#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check1(int n){
    int cnt = 0;
    while(n){
        if((n%10)%2 == 0)
            cnt++;
        n/=10;
    }
    return cnt;
}
bool cmp1(int a, int b){
    if(check1(a) != check1(b))
        return check1(a) < check1(b);
    return a < b;
}

int check(int n){
    int cnt = 0;
    while(n){
        if((n%10)%2 == 1)
            cnt++;
        n/=10;
    }
    return cnt;
}

bool cmp2(int a,int b){
    return check(a) < check(b);
}

void dk1(vector <int> v){
    sort(v.begin(),v.end(),cmp1);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}
void dk2(vector <int> v){
    stable_sort(v.begin(),v.end(),cmp2);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main(){
    int n; cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    dk1(a);
    dk2(a);
    return 0;
}