//Leap Year   1/4+1/4+1/4+1/4 = 1DAY     366 DAYS in Leap Year 
#include<iostream>
using namespace std;
void CheckLeapYear(int Year){
  if(Year%4==0 && Year%100!=0 || (Year%400==0)){
    cout<<"LEAP YEAR"<<endl;
  }
  else{
    cout<<"NOT LEAP YEAR"<<endl;
  }
    
}

int main(){

  CheckLeapYear(2004);
  CheckLeapYear(2032);
  CheckLeapYear(1900);
  CheckLeapYear(2023);

  return 0;
}