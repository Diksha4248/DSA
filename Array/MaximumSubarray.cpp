#include<bits/stdc++.h>
using namespace std;

//Largest Sum Contiguous Subarray (Kadane’s Algorithm)
// TC: O(N)
// SC: O(1)

int main()
{
    // int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int arr[] = {5,4,-1,7,8};
    int n = sizeof(arr)/sizeof(int);

    int curmax = 0; 
    int maxsum = 0;
    int start = 0, end = 0;
    for(int i=0;i<n;i++){
        curmax += arr[i];
        if(curmax>maxsum){
            maxsum = curmax;
        }

        if(curmax<0) {
            curmax = 0;
            start = i+1;  // to store the start index of max subarray
        }

        if(curmax == maxsum) {
            end = i;   // to store the end index of the max subarray
        }
    }

    cout<<"\nThe maximum subarray sum is : "<<maxsum;
    cout<<"\nStart index : "<<start;
    cout<<"\nEnd index : "<<end;

    cout<<"\n------------- Max Subarray ---------------\n";
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}