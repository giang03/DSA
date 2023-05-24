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

void DFS(node *root,int cnt){
    if(root == NULL) return;
    v.push_back(cnt);
    DFS(root->right,cnt + 1);
    DFS(root->left,cnt + 1);
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
    int cnt = 0;
    DFS(root,cnt);
    sort(v.begin(),v.end(),greater<>());
    int max = v[0],ans = 0;
    for(int x : v){
        if(x == max) ans++;
    }
    cout << ans << endl;
    return 0;
}