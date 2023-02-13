#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,x; 
bool cmp1(int a,int b){
    if(abs(a-x) != abs(b-x))
        return abs(a-x) < abs(b-x);
    return a < b;
}

bool cmp2(int a,int b){
    if(a % 2 != b % 2)
        return a % 2 < b % 2;
    if(a % 2 == 0 && b % 2 == 0)
        return a < b;
    return a > b;
}

void in1(vector <int> a){
    sort(a.begin(),a.end(),cmp1);
    for(int x : a){
        cout << x << " ";
    }
    cout << endl;
}
void in2(vector <int> a){
    sort(a.begin(),a.end(),cmp2);
    for(int x : a){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    cin >> n >> x;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        a.push_back(t);
    }
    in1(a);
    in2(a);
    return 0;
}