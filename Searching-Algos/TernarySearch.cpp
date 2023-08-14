#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(log N base 3)

int TernarySearch(int arr[],int n,int left, int right,int ele){

    if(left<=right){
        int mid1 = left + (right - left)/3;
        int mid2 = right - (right -left)/3;

        if(arr[mid1]==ele) return mid1;
        if(arr[mid2]==ele) return mid2;

        if(arr[mid1]>ele) return TernarySearch(arr,n,left,mid1-1,ele);

        else if (ele > arr[mid2]) return TernarySearch(arr,n,mid2+1,right,ele);

        else { 
            return TernarySearch(arr,n,mid1+1,mid2-1,ele);
        }
    }

    return -1;

}

int main(){

    int arr[] = {23,56,2,1,24,8,5,3};
    int n = sizeof(arr)/sizeof(int);

    int ele = 58; // element to be searched

    sort(arr,arr+n); // sorting the array 

    int left = 0;
    int right = n-1;
    int result = TernarySearch(arr,n,left,right,ele);

    if(result==-1) cout<<"Element not found";
    else cout<<"Element found"<<endl;

    return 0;

}


// It is same as the binary search. The only difference is that, it reduces the time complexity a bit more. 
// the algorithm involves ‘N’ steps. The searchable range would be the size = 3^N. 
// Inversely, the number of steps needed to find the element is the log of the size of the 
// collection. So the runtime is O(log N base 3).