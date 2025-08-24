#include<iostream>
using namespace std;

class Solution {
public:
    int Largest(int arr[],int n){
        int large=arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>large){
                large=arr[i];
            }
        }
        return large;
    }
};

int main(){
    Solution obj;
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Largest element is: " << obj.Largest(arr, n) << endl;
    return 0;   
    }