#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int MaxLengthOfpair(vector<pair<int,int>> A)
{
    int Length = 1;

    sort(A.begin(), A.end(), [](pair<int,int>& a, pair<int,int>& b){
        return a.second < b.second;
    });

    int chainEnd = A[0].second;

    for(size_t i = 1; i < A.size(); i++){
        if(A[i].first > chainEnd){
            Length++;
            chainEnd = A[i].second;
        }
    }
    return Length;
}

int main(){
    vector<pair<int,int>> A = { {5,24}, {39,60}, {5,28}, {27,40}, {50,90} };
    int k = MaxLengthOfpair(A);
    cout << "Max Length Of pair : " << k << endl;
    return 0;
}
