#include<iostream>
using namespace std;

int KthElement(int arr[],int n,int k){
    for(int i=1;i<n;i++){
        int currentValue = arr[i];
        int j = i-1;
        while(currentValue < arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = currentValue;
    }

    int ans = arr[n-k];
    return ans;
}

int main() {
    int arr[] = {3,2,3,1,2,4,5,5,6};
    int n = 9;
    int k = 4;

    int ans = KthElement(arr,n,k);
    cout<<ans;  
    return 0;
}