#include<iostream>
using namespace std;
int main() {
    int a=233;
    int b=6;
    int c=10;
    int greatest=a;
    if(b>greatest && b>c){
        greatest=b;
    }
    
    else if (c>greatest && c>b){
        greatest=c;
    }
    else{
        greatest=a;
    }
    cout<<"the greatest number is : "<<greatest <<endl;

    return 0;
}