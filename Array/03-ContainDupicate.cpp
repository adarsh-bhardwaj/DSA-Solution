#include<iostream>
#include<algorithm>
using namespace std;

bool duplicate(int arr[],int n){

    for(int i=1;i<n;i++) {
        int currentValue = arr[i];
        int j = i-1;

        while(arr[j] > currentValue && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = currentValue;
    }

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bool flag = duplicate(arr,n);
    if(flag) {
        cout<<"Duplicate Found";
    }
    else {
        cout<<"Dubplicate Not Found";
    }
}