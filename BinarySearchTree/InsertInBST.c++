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

Node *inputNodes()
{
    int root, l, r;
    queue<Node *> q;
    cin >> root;
    if(root==-1) return NULL;
    Node *rootNode = new Node(root);
    q.push(rootNode);
    while (!q.empty())
    {
        cin >> l >> r;
        Node *val = q.front();
        q.pop();

        if (l != -1)
        {
            Node *leftNode = new Node(l);
            val->left = leftNode;
            q.push(leftNode);
        }
        if (r != -1)
        {
            Node *rightNode = new Node(r);
            val->right = rightNode;
            q.push(rightNode);
        }
    }
    return rootNode;
}

Node* insert(Node* root,int x){
    if(root==NULL)return new Node(x);
    if(root->val>x){
        root->left= insert(root->left,x);
        
    }else{
       root->right=insert(root->right,x);
    }
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
    Node* rootNode=inputNodes();
    rootNode= insert(rootNode,21);
    printNodes(rootNode);

    return 0;
}