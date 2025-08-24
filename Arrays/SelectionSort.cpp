#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main(){
    int arr[6]={2,3,1,5,4,0};
    for(int i=0;i<6;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    SelectionSort(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}


// i        min