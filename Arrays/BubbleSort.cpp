#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void Display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={4,5,6,3,1,2};
    Display(arr,6);
    BubbleSort(arr,6);
    cout<<endl;
    Display(arr,6);

    return 0;
}
// 4 5 6 3 1 2  i=0 j =0
// 4 5 3 6 1 2 
// 4 5 3 1 6 2  
// 4 5 3 1 2 6

// 4 5 3 1 2 6  i=1  j=0
// 4 3 5 1 2 6
// 4 3 1 5 2 6
// 4 3 1 2 5 6 
