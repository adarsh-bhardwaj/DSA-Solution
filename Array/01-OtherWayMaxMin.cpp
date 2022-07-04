#include<iostream>
using namespace std;

void MaxMin(int arr[],int n) {
    
    int maxNumber=0,MinNumber=0;

    if(arr[0] > arr[1]){
        maxNumber = arr[0];
        MinNumber = arr[1];
    }
    else {
        maxNumber = arr[1];
        MinNumber = arr[0];
    }

    for(int i=2;i<n;i++){
        if(arr[i] > maxNumber ){
            maxNumber = arr[i];
        }
        if(arr[i]<MinNumber){
            MinNumber = arr[i];
        }
    }

    cout<<"MaxNumber is: "<<maxNumber<<endl;
    cout<<"MinNumber is: "<<MinNumber<<endl;
    return;
}

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    MaxMin(arr,n);
    return 0;
}