// Swap Two numbers

#include<iostream>
using namespace std;
void Swap(int a,int b){
    cout<<"BeforeSwap A: "<<a<<endl;
    cout<<"BeforeSwap B : "<<b<<endl;

int c;
c=a;
a=b;
b=c;
cout<<"AfterSwap A : "<<a<<endl;
cout<<"AfterSwap B : "<<b<<endl;

}

int main(){
Swap(11,22);
Swap(44,64);
return 0;
}