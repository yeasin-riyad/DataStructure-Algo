#include <bits/stdc++.h>
using namespace std;




int main()
{
    int n,val;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>val;
    v.push_back(val);
    int child_idx=v.size()-1;
    int parent_idx;

    while(child_idx!=0){
          parent_idx= (child_idx-1)/2;
        if(v[parent_idx]>v[child_idx]){
            swap(v[parent_idx],v[child_idx]);
        }else break;
        child_idx=parent_idx;
       

    }

    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}