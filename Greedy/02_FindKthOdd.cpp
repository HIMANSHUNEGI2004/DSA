#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int L=-3;
    int R=3;
    int k=1;

    vector<int> arr;
    for(int i=L;i<=R;i++){
        if(i%2!=0){
            arr.push_back(i);
        }
    }
    sort(arr.begin(),arr.end(),greater<int>()); // sort in descending order
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"kth Largest Odd Number : " << arr[k-1] <<endl;
    return 0;
}