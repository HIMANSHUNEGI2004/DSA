#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Array {
    public:
    void update(int ar[],int x){
        for(int i =0;i<5;i++){
            ar[i]++;
        }
        x=56;
        
    }

};

int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    int x=9;
    Array obj;
    obj.update(arr,x);
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"x: " << x << endl;
    return 0;
}