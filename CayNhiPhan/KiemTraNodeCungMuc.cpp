#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

struct node{
    int data;
    node *left,*right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

void makeRoot(node *root, int u, int v, int c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root,int u,int v, int c){
    if(root == NULL) return;
    if(root->data == u) makeRoot(root,u,v,c);
    else {
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

bool check(node *root, int h, int &maxh){
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL){
        if(maxh == 0){
            maxh = h;
            return true;
        }
        else{
            return h == maxh;
        }
    }
    else return check(root->left, h + 1, maxh) && check(root->right, h + 1, maxh);
}

int main(){
    int t; cin >> t;
    node *root = NULL;
    while(t--){
        int u,v; char c; 
        cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
            makeRoot(root, u, v, c);
        }
        else{
            insertNode(root, u, v, c);
        }
    }
    int maxh = 0;
    if(check(root,0,maxh)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
