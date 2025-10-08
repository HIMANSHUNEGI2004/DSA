#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        int j=i;
        cout<<"i="<< i <<": "<<endl;
        while(j>0 && arr[j]<arr[j-1])
        {
            cout<<"Original :";
            for(int k= 0; k<i+1; k++){
                cout<<arr[k] <<" ";
            }
            cout<<endl;

            swap(arr[j],arr[j-1]);
            j--;
            
            cout<<"After Swap :";
            for(int y=0; y<i; y++){
                cout<<arr[y] <<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    int arr[6]={2,3,1,5,4,0};
    for(int i=0;i<6;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    InsertionSort(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}


// 5 3 4 2 0 1 j=0 i=0
// 3 5 4 2 0 1 j=1 i=1
// 3 4 5 2 0 1 j=2
// 