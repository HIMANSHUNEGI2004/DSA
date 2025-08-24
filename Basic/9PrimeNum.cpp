// 2 3 5 7 11 13 17 19 23 29 31 .... -->  Prime number  (which are divisible by own or 1)

#include<iostream>
using namespace std;
void primeNumber(int num){
   
   int count=0;
   for(int i=1;i<=num;i++){
      if(num%i==0){
         count++;
      }
   }
   if(count==2){
      cout<<"PRIME NUMBER"<<endl;
   }
   else{
      cout<<"NOT PRIME"<<endl;
   }
}

int main(){

   primeNumber(4);
   primeNumber(0);
   primeNumber(7);
   primeNumber(29);


   return 0;
}