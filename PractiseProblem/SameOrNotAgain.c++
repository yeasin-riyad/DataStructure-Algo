#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    queue<int> q;
    int n,m,val;
    cout<<"Give The Size Of Stack:-"<<endl;
    cin>>n;
     cout<<"Give The Size Of Queue:-"<<endl;
     cin>>m;
     cout<<"Input The Value of Stack:=";
     for(int i=0;i<n;i++){
        cin>>val;
        st.push(val);
     }
      cout<<"Input The Value of Queue:=";
     for(int i=0;i<n;i++){
        cin>>val;
        q.push(val);
     }
     string same="YES";
     if(st.size()!=q.size()){
        same="NO";
     }else{
        queue<int> q2;
        int value;
        while(!st.empty()){

              while(!q.empty()){
            value=q.front();
            q.pop();
            if(q.empty()==true){
                q=q2;
                break;

            }
            q2.push(value);           
        }
        if(st.top()!=value){
            same="NO";
            break;

        }
        st.pop();

        }
      
     }

     cout<<same<<endl;


    return 0;
}