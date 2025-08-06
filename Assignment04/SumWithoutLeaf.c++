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

void getSum(Node *root,int &sum){
    if(root==NULL){
        return;
    }

    else if(root->left==NULL && root->right==NULL){
        return;
    }
    sum+=root->val;

    getSum(root->left,sum);
    
    getSum(root->right,sum);

}

int main()
{
    Node* rootNode=inputNodes();
    int sum=0;
    getSum(rootNode,sum);
    cout<<sum<<endl;

    return 0;
}