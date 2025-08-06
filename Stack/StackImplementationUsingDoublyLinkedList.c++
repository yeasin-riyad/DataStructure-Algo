#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* prev;
    int val;
    Node* next;

    Node(int val){
        this->prev=NULL;
        this->val=val;
        this->next=NULL;
    }
};

class myStack{
    public:
    Node* head=NULL;
    Node* tail=NULL;
   int size=0;

  
    void push(int val){
        Node* newNode= new Node(val);
        size++;
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
        
    }
    void pop(){
        Node* deleteNode=tail;
        if(tail==NULL){
            head=NULL;
            return;
        }
        size--;
        tail=tail->prev;
          if(tail==NULL){
            head=NULL;
            return;
        }

        tail->next=NULL;
        delete deleteNode;
    }

    int top(){
       return tail->val;
    }
    int size(){
      
        return size;
    }
    bool empty(){
      return head==NULL;
    }

};
int main(){
    myStack stack;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        stack.push(val);

    }
    while(!stack.empty()){
        cout<<stack.top()<<endl;
        stack.pop();
    }
    return 0;
}