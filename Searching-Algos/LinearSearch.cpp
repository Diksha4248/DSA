#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(N)
// Best Case : O(1), Worst Case: O(N), Average Case: O(N);

int lsearch(int arr[],int n,int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele) return i;
    }

    return -1;
}

int main(){

    int arr[] = {23,56,2,1,24};
    int n = sizeof(arr)/sizeof(int);

    int ele = 2; // element to be searched
    int result = lsearch(arr,n,ele);

    if(result==-1) cout<<"Element not found";
    else cout<<"Element found at index : "<<result;

    return 0;

}