#include <bits/stdc++.h>
using namespace std;

// The Binary Search Algorithm can be implemented in the following two ways
//     -- 1)  Iterative Binary Search Algorithm
//     -- 2)  Recursive Binary Search Algorithm


// Approach 1: Iterative
// Time Complexity: O(log N)
// Auxiliary Space: O(1)

int bsearch(int arr[],int n,int ele){
   int start = 0;
   int end = n-1;
   int mid ;
  
   while(start<=end){

    mid = (start + end)/2;

    if(arr[mid]==ele) return mid;

    if(arr[mid]>ele) end = mid-1;
    else start = mid+1;

   }

   return -1;
}

// Approach 2 : Recursive;
// Time Complexity: O(log N)
// Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary space will be O(logN).

int bsearch(int arr[],int n, int start, int end, int ele){
    if(start<=end){
        int mid = (start+end)/2;

        if(arr[mid] == ele) return mid;
        if(arr[mid]>ele) return bsearch(arr,n,start,mid-1,ele);
        else return bsearch(arr,n,mid+1,end,ele);
    }

    return -1;
}

int main(){

    int arr[] = {23,56,2,1,24};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr+n);
    int ele = 56; // element to be searched
    int result = bsearch(arr,n,ele);

    if(result==-1) cout<<"Element not found";
    else cout<<"Element found";

    int start = 0;
    int end = n-1;
    cout<<"\nRecursive Approach : "<<endl;
    int res = bsearch(arr,n,start,end,ele);
    if(res == -1) cout<<"Element not found";
    else cout<<"Element found";

    return 0;

}