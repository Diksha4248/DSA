#include<bits/stdc++.h>
using namespace std;

// Task :  Print duplicate elements

int main(){

    int arr[] = {6,7,8,1,6,7,6};
    int n = sizeof(arr)/sizeof(int);


    // Approach 1 - Brute force (using set)
    cout<<"Approach 1 - Brute force (using set)"<<endl;
    set<int> s;
     for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    // duplicates.push_back(nums[i]);
                    s.insert(arr[i]);
                    break; // Stop inner loop since duplicate is found.
                }
            }
        }

    for(auto i: s) cout<<i<<" ";    

    // Approach 2 - Using Map
    cout<<"\nApproach 2 - Using Map"<<endl;
    unordered_map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    vector <int> v;  
    for(auto x:mp){
        if(x.second >= 2) {
            // cout<<x.first<<" ";
            v.push_back(x.first);
        }
    }

   // int m = sizeof(v)/sizeof(int);  
   // use v.size() instead of m otherwise it will print garbage value
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }

    return 0;
}