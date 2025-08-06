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

vector<int> levelNodes(Node* root,int x){
    queue<pair<Node*,int>> q;
    vector<int> v;
    if(root){
         q.push({root,0});
    }

    while(!q.empty()){
        pair<Node*,int> data=q.front();
        q.pop();
        int level=data.second;
        if(level==x){
            v.push_back(data.first->val);   
            continue;
        }
        if(data.first->left){
            q.push({data.first->left,level+1});
        }
        if(data.first->right){
            q.push({data.first->right,level+1});
        }
    }

    return v;
   

}

int main()
{
    Node* rootNode=inputNodes();
    int x;
    cin>>x;
    vector<int> v=levelNodes(rootNode,x);
    if(v.empty()){
        cout<<"Invalid"<<endl;
    }else{
        for(int val:v){
            cout<<val<<" ";
        }
    }
  

    return 0;
}