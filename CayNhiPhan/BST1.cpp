#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct node {
    int data;
    node *left, *right;    
    node(int x){
        data = x;
        left = right = NULL;
    }
};
node* insertNode(node *root, int x){
    if(root == NULL){
        return new node(x);
    }
    if(x < root->data){
        root->left = insertNode(root->left, x);
    } 
    else {
        root->right = insertNode(root->right, x);
    }
    return root;
}
void printNode(node *root){
    if(root == NULL){
        return;
    }
    printNode(root->left);
    cout << root->data << ' ';
    printNode(root->right);
}
int main() {
    node *root = NULL;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        root = insertNode(root, x);
    }
    printNode(root);
    return 0;
}
