#include<iostream>
using namespace std;

int reverse(int arr[], int n){
    int start =0;
    int end=n-1;
    for(int i=0;i<n/2;i++){
        for(int j=end;j>n/2;j--){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;  
            start++;
            end--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }       
    return 0;
}
int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    int n=5;
    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Reversed array: ";
    reverse(arr, n);
    
    return 0;
}   