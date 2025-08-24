#include <iostream>

using namespace std;

int main(){
    int arr[]={2,4,6,8,10};
    for(int i=0;i<5;i++)
    {
        
        for(int j=i+1;j<5;j++)
        {
            cout<<"("<< arr[i] <<","<<arr[j]<<")";
        }
        cout<<endl;
    }
    return 0;
}