 // 0 1 1 2 3 5 8 13 21 
//  | | | | | | | |   |
//  1 2 3 4 5 6 7 8   9 
#include<iostream>
using namespace std;

int fibonacciR(int num){
  if(num==0 || num==1){
    return 1;
  }
  return fibonacciR(num)+fibonacciR(num-1);
}

int main(){
  int sumofSeries=fibonacciR(3);
  cout<<"series: "<<sumofSeries<<endl;
  return 0;
}

