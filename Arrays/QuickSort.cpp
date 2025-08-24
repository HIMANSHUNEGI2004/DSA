#include<iostream>
#include<vector>
using namespace std;
int part(vector<int>& arr,int low ,int high){     //    i          
    int i=low;                                    //  4 9 8 3 2 1 4
    int j=high;                                   //  p
    int pivot=arr[low];
    while(i<j)
    {
        while(arr[i]<=pivot ){
            i++;
        }
        while(arr[j]>=pivot  )
        {
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}

void quicksort(vector<int>& arr,int low,int high){
    if(low<high){
        int partation=part(arr,low,high);
        quicksort(arr,low,partation-1);
        quicksort(arr,partation+1,high);
    }
}

void display(vector<int> arr){
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){
    vector<int> arr={4,9,8,3,2,1,4,9,0};
    int low=0;
    int high=arr.size()-1;
    display(arr);
    quicksort(arr,low,high);
    display(arr);
    return 0;
}