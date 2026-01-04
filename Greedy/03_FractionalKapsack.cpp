#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int FractionalKnapsack(vector<int>weight,vector<int>value,int capacity){
    int Total=0;
    vector<int> ratio;
    for(size_t i=0;i<weight.size();i++){
        int k=value[i]/weight[i];
        ratio.push_back(k);
    }
    sort(ratio.begin(),ratio.end(),greater<int>());
    for(size_t i=0;i<ratio.size();i++){
        if(capacity>weight[i]){
            Total=Total+value[i];
            capacity=capacity-weight[i];
        }
        else{
            Total=Total+ratio[i]*capacity;
        }
    }
    return Total;
}
int main(){
    vector<int> weight={10,20,30};
    vector<int> value={60,100,120};
    int capacity=40;
    int K=FractionalKnapsack(weight,value,capacity);
    cout<<"Result: " << K << endl;
    return 0;
}