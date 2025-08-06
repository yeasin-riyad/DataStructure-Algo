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

int maxDepth(Node* root, int &totalNodes){
    if(root==NULL){
        
        return 0;
    }
    totalNodes++;
    int lh=maxDepth(root->left,totalNodes);
    int rh=maxDepth(root->right,totalNodes);
    return 1+max(lh,rh);
}


int main()
{
    Node* rootNode=inputNodes();
    int totalNodes=0;
    int maxDep=maxDepth(rootNode,totalNodes);
    double res=pow(2,maxDep)-1;
    if(res==totalNodes){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  

    return 0;
}