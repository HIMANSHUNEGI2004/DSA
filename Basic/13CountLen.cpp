// count   12341--> 5
#include<iostream>
using namespace std;
void Count(int num){

  int count =0;
  while(num>0){
   count++;
   num=num/10;
}
    
  
  cout<<"Count :" << count<<endl;
}

int main(){
Count(2312);
Count(1);
Count(1212);
Count(0);
return 0;
}