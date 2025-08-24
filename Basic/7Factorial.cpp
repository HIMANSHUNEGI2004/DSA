// 0=1
// 1=1*1
// 2=2*1
// 3=3*2*1
// 4=4*3*2*1
// 5=5*4*3*2*1


#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    if(n==0){
      return 0;
    }

    for(int i=n;i>0;i--){
      fact=fact*i;
    }
    return fact;
}


int main(){
    int k=factorial(4);
    int y=factorial(0);
    int z=factorial(6);
    int x=factorial(1);

    cout<<"k:"<<k<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"z:"<<z<<endl;
    return 0;
}