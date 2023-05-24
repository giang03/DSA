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

void makeRoot(node *root,int u, int v, int c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root,int u, int v, int c){
    if(root == NULL) return;
    if(root->data == u) makeRoot(root,u,v,c);
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

void levelOrder(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *tmp = q.front(); q.pop();
        cout << tmp->data << ' ';
        if(tmp->left != NULL)
            q.push(tmp->left);
        if(tmp->right != NULL)
            q.push(tmp->right);
    }
}


int main(){
    node *root = NULL;
    int t; cin >> t;
    while(t--){
        int u,v; char c;
        cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
            makeRoot(root,u,v,c);
        }
        insertNode(root,u,v,c);
    }
    levelOrder(root);
    return 0;
}
