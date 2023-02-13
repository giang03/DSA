#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

void makeRoot(node *root, int u, int v, char c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c){
    if(root == NULL) return;
    if(root->data == u){
        makeRoot(root,u,v,c);
    }
    else {
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

void postorder(node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << ' ';
}

int main(){
    int t; cin >> t;
    node *root = NULL;
    while(t--){
        int u,v; char c; 
        cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
        }
        insertNode(root,u,v,c);
    }
    postorder(root);
    return 0;
}
