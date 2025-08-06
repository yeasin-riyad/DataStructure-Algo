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

int countLeafNodes(Node* root){
    if(root==NULL){
        return 0;
    }
     if(root->left==NULL && root->right==NULL){
        return 1;

    }
    int l=countLeafNodes(root->left);
    int r=countLeafNodes(root->right);

        
        return l+r;
    
    
}
int main()
{
    Node* rootNode=inputNodes();
    cout<<countLeafNodes(rootNode);

    return 0;
}