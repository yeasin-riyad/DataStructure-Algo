#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,n;
    queue<string>que;
    string name;
    cin>>q;
    while(q--){
        cin>>n;
        if(n==0){
            cin>>name;
            que.push(name);

        }else if(n==1){
            if(que.empty()){
                cout<<"Invalid"<<endl;
                
            }else{
                 cout<<que.front()<<endl;
                 que.pop();

            }
           
        }
    }
    return 0;
}