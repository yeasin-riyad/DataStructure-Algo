#include<bits/stdc++.h>
using namespace std;

class compareMyObj{
    public:
 

        bool operator()(pair<string,int>p1,pair<string,int>p2){
          

            return p1.first==p2.first?p1.second<p2.second:p1.first>p2.first;
        }

};
int main(){
    int n,num;
    string name;

        priority_queue<pair<string,int>,vector<pair<string,int>>,compareMyObj>pq;
        
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>name>>num;
            pq.push({name,num});
        }

        while(!pq.empty()){
            cout<<pq.top().first<<" "<<pq.top().second<<endl;
            pq.pop();
        }
    
    return 0;
}