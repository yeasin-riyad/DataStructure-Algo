#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,val;
    stack<int> a;
    queue<int> b;
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