#include<iostream>
#include<vector>
#include<Algorithm>
#include <cmath>
using namespace std;

int MinAbsoluteDiffternce(vector<int>A,vector<int>B)
{
    int Min=0;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    for(int i=0;i<B.size();i++)
    {
        Min+=abs(A[i]-B[i]);
    }

    return Min;
}

int main(){

    vector<int> A={1,2,3};
    vector<int> B={2,1,3};
    int k=MinAbsoluteDiffternce(A,B);
    cout<<"Minimun Absolute Diffternce of pair : " << k <<endl;
    return 0;
}