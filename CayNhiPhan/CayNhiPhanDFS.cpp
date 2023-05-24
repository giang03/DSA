#include <bits/stdc++.h>
using namespace std;

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

void insertNode(node *root,int u, int v, int c){
    if(root == NULL) return;
    if(root->data == u) makeRoot(root,u,v,c);
    else {
        insertNode(root->left,u, v, c);
        insertNode(root->right,u, v, c);
    }
}

void DFS(node *root){
    if(root == NULL) return;
    cout << root->data << ' ';
    DFS(root->right);
    DFS(root->left);
}

int main(){
    node *root = NULL;
    int n; cin >> n;
    while(n--){
        int u,v; char c;
        cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
        }
        insertNode(root,u,v,c);
    }
    DFS(root);
    return 0;
}