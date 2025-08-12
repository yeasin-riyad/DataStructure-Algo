#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    
    cin>>t;
         cin.ignore();

    while(t--){
        string s,word,mxWord;
        int count=0;
        map<string,int>mp;

        getline(cin,s);
        stringstream ss(s);
     
        while(ss>>word){
            mp[word]++;
            if(mp[word]>count){
                mxWord=word;
                count=mp[word];
            }
        }

        cout<<mxWord<<" "<<count<<endl;
        

    }
    return 0;
}