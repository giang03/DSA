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

int maxh = 0, minh = INT_MAX;
void duyet(node *root){
    if(root == NULL) return;
    maxh = max(maxh, root -> data);
    minh = min(minh, root -> data);
    duyet(root -> left);
    duyet(root -> right);
}

int main(){
    int n; cin >> n;
    node *root = NULL;
    while(n--){
        int x; cin >> x;
        root = insertNode(root,x);
    }
    duyet(root);
    cout << maxh << ' ' << minh << endl;
    return 0;
}