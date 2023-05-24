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
    if(c== 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u,int v, int c){
    if(root == NULL) return;
    if(root->data == u) makeRoot(root,u,v,c);
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

bool check(node *root, int h, int &maxh){
    if(root == NULL) return 1;
    if(root->left == NULL && root->right == NULL){
        if(maxh == 0) {
            maxh = h;
            return 1;
        }
        else return maxh == h;
    }
    else if(root->left != NULL && root->right != NULL) {
        return check(root->left,h+1,maxh) && check(root->right,h+1,maxh);
    }
    else return 0;
}

int main(){
    node *root = NULL;
    int t; cin >> t;
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
    if(check(root,0,maxh)) cout << "YES";
    else cout << "NO";
    return 0;
}
