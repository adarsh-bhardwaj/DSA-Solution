#include<iostream>
using namespace std;

void maxMin(int arr[],int n) {

    for(int i=0;i<n;i++){
        int currentValue = arr[i];
        int j = i-1;
        while (currentValue < arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=currentValue;
    }

    cout<<"MinNumber: "<<arr[0]<<endl;
    cout<<"MaxNumber: "<<arr[n-1]<<endl;
    return;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    maxMin(arr,n);
    return 0;
}