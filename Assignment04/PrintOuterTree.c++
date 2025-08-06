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



void printLeftSubTree(Node* root){
    if (root==NULL) return;
    if(root->left) printLeftSubTree(root->left);
    else printLeftSubTree(root->right);
    cout<<root->val<<" ";

}
void printRightSubTree(Node* root){

    if(root==NULL) return;
        cout<<root->val<<" ";

    if(root->right) printRightSubTree(root->right);
    else printRightSubTree(root->left);
}


int main()
{
    Node* rootNode=inputNodes();
    if(rootNode==NULL) return 0;


if (rootNode->left && rootNode->right){
    printLeftSubTree(rootNode);
    printRightSubTree(rootNode->right);
}else if(rootNode->left==NULL && rootNode->right){
    printRightSubTree(rootNode);
}else if (rootNode->left && rootNode->right==NULL){
    printLeftSubTree(rootNode);
}else{
    cout<<rootNode->val<<endl;
}

  

    return 0;
}