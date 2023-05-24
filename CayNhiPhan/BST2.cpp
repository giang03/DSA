#include <bits/stdc++.h>
using namespace std;

vector <int> v;

struct node{
    int data;
    node *left,*right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

node* insertNode(node *root,int x){
    if(root == NULL){
        return new node(x);
    }
    if(x < root->data){
        root->left = insertNode(root->left,x);
    }
    else {
        root->right = insertNode(root->right,x);
    }
    return root;
}

void preoder(node *root){
    if(root == NULL) return;
    cout << root->data << ' ';
    preoder(root->left);
    preoder(root->right);
}

int main(){
    int n; cin >> n;
    node *root = NULL;
    while(n--){
        int x; cin >> x;
        root = insertNode(root,x);
    }
    preoder(root);
    return 0;
}