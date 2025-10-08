#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n+i-1;j++){
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

}

int main(){
    int arr[6]={2,3,1,5,4,0};
    for(int i=0;i<6;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    BubbleSort(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}


