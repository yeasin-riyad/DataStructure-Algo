#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }
    int top(){
        return l.back();
    }
    void pop(){
        l.pop_back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }

};

class myQueue{
    public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }
    int front(){
        return l.front();
    }
    void pop(){
        l.pop_front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }

};
int main(){
    int n,m,val;
    myStack a;
    myQueue b;
    
    cin>>n>>m;
    string result="YES";
    for(int i=0;i<n;i++){
        cin>>val;
        a.push(val);
    }
      for(int i=0;i<m;i++){
        cin>>val;
        b.push(val);

    }
    if(a.size()!=b.size()){
        result="NO";
    }else{
        while(!a.empty()&& !b.empty()){
            if(a.top()!=b.front()){
                result="NO";
                break;
            }
            a.pop();
            b.pop();
        }
    }
    cout<<result<<endl;
    
    return 0;
}