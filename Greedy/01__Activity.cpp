#include <iostream>
using namespace std;

int main(){
    string s="LRRRRLLRLLRL";
    int L=0;
    int R=0;
    int count=0;
    for(size_t i=0;i<s.size();i++){
        if(s[i]=='L'){
            L++;
        }
        if(s[i]=='R'){
            R++;
        }
        if(L==R){
            count++;
        }
    }
    cout<< "X partitioned is :" <<count <<endl;
    return 0;
}
