#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int, int> mp;
    int arr[] = {1, 2, 3, 4, 2, 5, 3};

    // Count frequency of each number
    for (int i = 0; i < 7; i++) {
        mp[arr[i]]++;
    }

    // Check for duplicates
    for (auto it : mp) {
            cout << it.first<<" "<<it.second<<endl;
        
    }

    return 0;
}