// 121-->121 PALINDROME  
// 132-->231 NOT PALINDROME

// 12345   54321
#include<iostream>
using namespace std;

void palindrome1(int num){
    int dupli=num; 
    int reverse=0;
    while(num>0){
      reverse=reverse*10+num%10;
      num=num/10;
    }
    cout<<"reverse:"<<reverse<<endl;
    if(reverse==dupli){
       cout<<"PALINDROME"<<endl;
    }
    else{
       cout<<"NOT PALINDROME"<<endl;
    }
}

int main(){
    palindrome1(121);
    palindrome1(132);
    palindrome1(2333333);
    palindrome1(11111);
    return 0;
}