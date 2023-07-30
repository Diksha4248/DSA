#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int arr[] = {7,6,5,4,3,2};
    int n = sizeof(arr)/sizeof(int);

    // approach 1 - using two pointers
    // Time Complexity: O(N)
    // Space Complexity : O(1)
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

   cout<<"Approach 1 - Using two pointers"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

   // approach 2 - using reverse function (STL)
   // TC : O(N)
   // SC : O(1)
   cout<<"\nApproach 2 - Using STL reverse function"<<endl;
   reverse(arr,arr+n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

    // approach 3 - keep storing in another array
    // TC : O(N)
    // SC : O(N)
    int reversed_array[n];
    int j=0;
    for(int i=n-1;i>=0;i--){
        reversed_array[j] = arr[i];
        j++;
    }

    cout<<"\nApproach 3 - Keep storing in another array"<<endl;
    for(int i=0;i<n;i++){
        cout<<reversed_array[i]<<" ";
    }

    return 0;
}