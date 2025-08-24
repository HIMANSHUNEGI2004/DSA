// Binary Search 
#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
   int start=arr[0];
   int end=arr[n-1];
   while(start<=end)
   { 
      int mid=(start+end-start)/2;
      if(arr[mid]==key){
         return mid;
      }
      if(key<arr[mid]){
         end=mid-1;
          
      }
      else{
         start=mid+1;
      }
   }
   return -1;
}

int main(){
    int arr[]={1,2,5,7,9,11};
    int key=11;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=BinarySearch(arr,n,key);
    if(result!=-1){
      cout << "Element found at index: " << result << endl;
    } else {
      cout << "Element not found in the array." << endl;
    }             
    return 0;

}