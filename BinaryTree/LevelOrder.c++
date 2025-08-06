#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* left;
    int val;
    Node* right;

    Node(int val){
        this->left=NULL;
        this->val=val;
        this->right=NULL;
    }
};

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // নোড কিউ থেকে পপ করে ফেলা
        Node* temp=q.front();
        q.pop();
        // নোড নিয়ে কাজ করা
        cout<<temp->val<<" ";
        // কিউ তে নোডের চিল্ড্রেন পুষ করা
        if(temp->left){
             q.push(temp->left);

        }
      if(temp->right){
                q.push(temp->right  );


      }

    }
}
int main(){
     Node* root=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    
    root->left=a;
    root->right=b;
    a->left=c;
    b->left=d;
    b->right=e;
    levelOrder(root);
    
    return 0;
}