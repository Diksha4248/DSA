#include<bits/stdc++.h>
using namespace std;

void selsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                min_idx = j;
            }

            swap(arr[i],arr[min_idx]);
        }
    }
}

void display(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main()
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selsort(arr,n);
    display(arr,n);

    return 0;
}