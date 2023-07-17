#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int ar[],int n){
    // int n = sizeof(ar)/sizeof(int);
    for(int i=1;i<n;i++){
        int temp = ar[i];
        int j = i-1;

        while(j>=0 && ar[j]>temp){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = temp;
    }

    for(int i=0;i<n;i++){
        cout<<ar[i];
    }
}

int main()
{
    int ar[] = {2,5,1,3,9,7};
    int n = 6;
    InsertionSort(ar,n);
    return 0;
}