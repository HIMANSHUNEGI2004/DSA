#include<iostream>
using namespace std;

int SumOfNumber(int n){
    if(n==1){
        return 1;
    }

    return n+SumOfNumber(n-1);
}

int main (){
    int n=4;
    int x=SumOfNumber(n);
    cout<<"X = "<< x << endl;
    return 0;   
}