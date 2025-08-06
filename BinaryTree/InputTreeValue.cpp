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

// Print Level Order
void printLevelOrder(Node *root)
{
    if (root == NULL)
    {
        cout<<"NO TREE"<<endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // নোড কিউ থেকে পপ করে ফেলা
        Node *temp = q.front();
        q.pop();
        // নোড নিয়ে কাজ করা
        cout << temp->val << " ";
        // কিউ তে নোডের চিল্ড্রেন পুষ করা
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

// Input Node Value
Node *InputNode()
{
    int root, left, right;
    cin >> root;
    if (root == -1)
        return NULL;
    queue<Node *> q;
    Node *rootNode = new Node(root);
    Node *leftNode;
    Node *rightNode;
    q.push(rootNode);
    while (!q.empty())
    {
        cin >> left >> right;
        // কিউ থেকে পপ করতে হবে
        Node *val = q.front();
        q.pop();
        // পপ করা নোড নিয়ে কাজ করতে হবে
        if (left != -1)
        {
            leftNode = new Node(left);
            val->left = leftNode;
            // কানেকশন শেষে নতুন দুইটা নোড কিউতে পুশ করতে হবে।

            q.push(leftNode);
        }
        if (right != -1)
        {
            rightNode = new Node(right);
            val->right = rightNode;
            // কানেকশন শেষে নতুন দুইটা নোড কিউতে পুশ করতে হবে।

            q.push(rightNode);
        }
    }
    return rootNode;
}

int main()
{
    Node *rootNode = InputNode();
    printLevelOrder(rootNode);

    return 0;
}