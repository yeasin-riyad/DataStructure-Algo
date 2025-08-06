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

class myQueue{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int size=0;

    void push(int val){
        Node* newNode=new Node(val);
        size++;
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    };

    void pop(){
        size--;
        Node* deleteNode=head;
        head=head->next;
      
        delete deleteNode;
        if(head==NULL){
            tail=NULL;
            return;
        }
          head->prev=NULL;
    }

    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int Size(){
        return size;
    }
    bool empty(){
        return head==NULL;
    }

};
int main(){
    myQueue q;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        q.push(val);

    }
    // cout<<q.front()<<" "<<q.back()<<" "<<q.Size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}