#include<iostream>
#include<climits>
using namespace std;

int BestTime(int arr[],int n){

    int profit=0;
    int buyDay=INT_MAX;

    for(int i=0;i<n;i<i++){
        buyDay = min(buyDay,arr[i]);
        
        profit= max(profit,arr[i]-buyDay);
    }


    return profit;
}

int main() {
    
    int arr[] = {7,1,5,3,6,4};
    cout<<BestTime(arr,6);

    return 0;
}