#include <iostream>
using namespace std;

int main(){
    int j=0;    //0

    cout<<"J : "<<j<<endl;  // 0

    int x=j++;              //  Post Increment  // 0

    cout<<"J : "<<j<<endl;  // 1

    cout<<"x : "<<x<<endl;  // 0

    int b=++j;              //    2 

    cout<<"J : "<<j<<endl;  //  1
    cout<<"b : "<<b<<endl;  //  1

    return 0;
}