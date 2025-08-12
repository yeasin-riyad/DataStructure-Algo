#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,val;
    cin>>t;
    while(t--){
        priority_queue<int,vector<int>,greater<int>>pq;
        set<int>s;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>val;
            pq.push(val);
        }
        for(int i=0;i<n;i++){
            s.insert(pq.top());
            pq.pop();
        }
        for(auto val:s){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}