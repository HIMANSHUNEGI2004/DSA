#include<iostream>
using namespace std;    

class fun
{
    public:
    void display(int arr[]){
        cout<<"array: " ;
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
    }
    int Linearsearch(int arr[],int n,int key)
    {
        
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                return i;
            }
            
        }
        return -1;
        
    }

};

int main()
{
    fun obj;
    int arr[5]={1, 2, 3, 4, 5};
    int key=4;
    int result=obj.Linearsearch(arr, 5, key);
    if(result != -1){
        cout<<"Element found at index: " << result << endl;
    } else {
        cout<<"Element not found" << endl;
    }
    obj.display(arr);
    return 0;
}