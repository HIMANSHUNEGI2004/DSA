#include<iostream>
#include<vector>
using namespace std;


vector<int> merge(vector<int>& arr,int low,int mid,int high)
{
    vector<int> temp;
    int i=low;
    int j=mid+1;

    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
                i++;
            }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for (int k = 0; k < temp.size(); k++) {
        arr[low + k] = temp[k];
    }
    return arr;
}

void mergesort(vector<int>& arr,int low,int high)
{
    if(low>=high){
        return;
    }
    else{
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void display(vector<int> arr){
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){
    vector<int> arr={4,9,8,3,2,1,4};
    int low=0;
    int high=arr.size()-1;
    display(arr);
    mergesort(arr,low,high);
    display(arr);
    return 0;
}