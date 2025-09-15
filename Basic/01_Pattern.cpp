#include<iostream>
using namespace std;
void pattern01(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern02(){
    for(int i=1;i<5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern03(){
    for(int i=1;i<5;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern04(){
    for(int i=1;i<5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern05(){
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern06(){
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern07(){
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern08(){
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    pattern01();

    cout<<endl;
    pattern02();

    cout<<endl;
    pattern03();

    cout<<endl;
    pattern04();

    cout<<endl;
    pattern05();

    cout<<endl;
    pattern06();

    cout<<endl;
    pattern07();

    return 0;
}