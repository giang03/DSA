#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
char a[100];
int ok;

void khoitao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = '(';
    }
}

void next(){
    int i = n;
    while(i > 1 && a[i] == ')'){
        a[i] = '(';
        --i;
    }
    if(i == 1) ok = 0;
    else {
        a[i] = ')';
    }
}

bool check(){
    stack <char> st;
    for(int i = 1; i <= n; i++){
        if(a[i] == '('){
            st.push(a[i]);
        }
        else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else return 0;
        }
    }
    if(!st.empty()) return 0;
    return 1;
}

int main(){
    khoitao();
    ok = 1;
    int flag = 1;
    while(ok){
        if(check()){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << endl;
            flag = 0;
        }
        next();
    }
    if(flag == 1) 
        cout << "NOT FOUND" << endl;
    return 0;
}