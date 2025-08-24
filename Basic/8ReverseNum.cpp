//  7344---->>4437


// rem=num%10;
// rem=7344%10=4;  734
// rem=734%10=4;
// rem=73%10=3;
// rem=7%10=7;


// reverse=0;



// reverse=reverse*10+rem


// reverse=0*10+4=0+4=4;
// reverse=4*10+4=40+4=44;
// reverse=44*10+3=440+3=443;
// reverse=443*10+7=4430+7=4437;

#include<iostream>
using namespace  std;

int reverse(int num){
    int reversen=0;
    while(num>0){
      reversen=reversen*10+num%10;
      num=num/10;
    }
    return reversen;
}

int main(){
    int k=reverse(4771);
    int y=reverse(77221);
    int z=reverse(66622881);
    int x=reverse(1126);

    cout<<"k:"<<k<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"z:"<<z<<endl;
    return 0;
}