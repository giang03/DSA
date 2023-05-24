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

bool check(node *root1, node *root2){
    if(root1 == NULL && root2 == NULL) return 1;
    if(root1==NULL || root2==NULL) return 0;
    if(root1->data != root2->data) return 0;
    return check(root1->left,root2->left) && check(root1->right,root2->right);
}

int main(){
    node *root1 = NULL;
    node *root2 = NULL;
    int n1,n2; cin >> n1;
    while(n1--){
        int u,v; char c;
        cin >> u >> v >> c;
        if(root1 == NULL){
            root1 = new node(u);
        }
        insertNode(root1,u,v,c);
    }
    cin >> n2;
    while(n2--){
        int u,v; char c;
        cin >> u >> v >> c;
        if(root2 == NULL){
            root2 = new node(u);
        }
        insertNode(root2,u,v,c);
    }
    if(check(root1,root2)) cout << "YES";
    else cout << "NO";
    return 0;
}