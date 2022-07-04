#include<iostream>
#include<climits>
using namespace std;

int MaxSum(int arr[],int n){

    int sum=0;
    int maxSubSum = INT_MIN;

    for(int i=0;i<n;i++){
        sum += arr[i];
        maxSubSum = max(maxSubSum,sum);
        if(sum < 0) {
            sum = 0;
        }
    }

    return maxSubSum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<MaxSum(arr,n);
    return 0;
}