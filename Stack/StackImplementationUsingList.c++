#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
    list<int> l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }

    int top(){
       return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
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