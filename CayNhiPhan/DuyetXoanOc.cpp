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

void Duyet(node *root){
    stack <node*> st1,st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            node* tmp = st1.top();st1.pop();
            cout << tmp->data << ' ';
            if(tmp->right != NULL) st2.push(tmp->right);
            if(tmp->left != NULL) st2.push(tmp->left);
        }
        while(!st2.empty()){
            node* tmp = st2.top();st2.pop();
            cout << tmp->data << ' ';
            if(tmp->left != NULL) st1.push(tmp->left);
            if(tmp->right != NULL) st1.push(tmp->right);
        }
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
            makeRoot(root, u, v, c);
        }
        else{
            insertNode(root, u, v, c);
        }
    }
    Duyet(root);
    return 0;
}
