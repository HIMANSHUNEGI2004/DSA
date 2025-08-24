#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=0;i<6;i++){
        cout<<arr[i] <<" ";
    }
    cout <<endl;
    int k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1])
            {
                k=arr[j+1];
                arr[j+1]=arr[j];
                j--;
            }
            else{
                arr[j]=key;
            }


}

// 5 3 4 2 0 1 j=0
// 3 5 4 2 0 1 j=1
// 3 4 5 2 0 1 j=2
// 