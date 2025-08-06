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

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int l=countNodes(root->left);
    int r=countNodes(root->right);
    return l+r+1;
}
int main()
{
    Node* rootNode=inputNodes();

    return 0;
}