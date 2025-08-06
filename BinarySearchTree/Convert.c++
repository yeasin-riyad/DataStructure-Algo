#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left;
    int val;
    Node *right;

    Node(int val)
    {
        this->left = NULL;
        this->val = val;
        this->right = NULL;
    }
};
Node* insert(int a[],int n,int l,int r){
    if(l>r) return NULL;
    int midIndex=(l+r)/2;
    Node* root= new Node(a[midIndex]);
    root->left=insert(a,n,l,midIndex-1);
    root->right=insert(a,n,midIndex+1,r);
    return root;
  
}

void printNodes(Node* root){
    if(root==NULL)return;
    queue<Node* >q;
    q.push(root);;
    while(!q.empty()){
        Node* val=q.front();
        q.pop();
        cout<<val->val<<" ";
        if(val->left) q.push(val->left);
        if(val->right) q.push(val->right);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Node* rootNode=insert(a,n,0,n-1);
    printNodes(rootNode);
    return 0;
}