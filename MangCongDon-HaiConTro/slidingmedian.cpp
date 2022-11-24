#include <bits/stdc++.h>
using namespace std;

long long  n, m;
long long a[200000];
multiset<long long> up;
multiset<long long> low;

void insert(long long val){ 
    long long a = *low.rbegin();
    if(a < val){
        up.insert(val);
        if(up.size() > m/2){
            low.insert(*up.begin());
            up.erase(up.find(*up.begin()));
        }
    }
    else{
        low.insert(val);
        if(low.size() > (m + 1)/2){
            up.insert(*low.rbegin());
            low.erase(low.find(*low.rbegin()));
        }
    }
}

void erase(long long val){ // erase from sets
    if(up.find(val) != up.end()) up.erase(up.find(val));
    else low.erase(low.find(val));
    if(low.empty()){
        low.insert(*up.begin());
        up.erase(up.find(*up.begin()));
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    low.insert(a[0]); for(int i = 1; i < m; i++) insert(a[i]);
    cout << *low.rbegin() << " ";
    for(long long i = m; i < n; i++){
        if(m == 1){
            insert(a[i]);
            erase(a[i - m]);
        }
        else{
            erase(a[i - m]);
            insert(a[i]);
        }
        cout << *low.rbegin() << " ";
    }
    cout << endl;
}