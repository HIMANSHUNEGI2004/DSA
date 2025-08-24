#include<iostream>
using namespace std;

void  func(int a){

    a++;

    cout<<"A"<<a<<endl;  //  8

}

void Fun(int arr[]){

    for(int i=0;i<=5;i++){  

        arr[i]=arr[i]+1;    
    }
}
 

int main(){


    int arr[6]={1,2,3,4,5,6};
    Fun(arr); // call by reference 




    int a=7;

    func(a);   // call by value 

    cout<<"A :"<<a<<endl; // 7 

    return 0;
}