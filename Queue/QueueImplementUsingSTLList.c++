#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class myQueue{
    public:
    list <int> l;

    void push(int val){
        l.push_back(val);
    };

    void pop(){
       l.pop_front();
    }

    int front(){
        return l.front();
    }
    int back(){
        return l.back();
    }
    int Size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
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