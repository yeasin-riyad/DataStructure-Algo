#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        stack<char> stk;
        cin>>s;
        for(char ch:s){
            if(!stk.empty()&& ((ch=='0'&& stk.top()=='1')||(ch=='1'&& stk.top()=='0'))){
                stk.pop();


            }else{
                stk.push(ch);
            }
        }
        if(stk.empty()){
            cout<<"YES"<<endl;;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}