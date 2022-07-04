#include<iostream>
using namespace std;

void FindMissingNumber(int arr[],int n) {
    int repeat = 0;
    int missing = 0;
    int count = 1;
    int maxRepeat = 0;
    arr[n]=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i-1]){
            count++;
        }
        else {
            count = 1;
        }
        
        if(maxRepeat < count ){
            repeat = arr[i];
            maxRepeat = count;
        }
        if(arr[i] != arr[i+1] && arr[i]+1<arr[i+1]){
            missing = arr[i]+1;
        }
    }
    
    cout<< repeat<<" "<<missing;

    return;
}

int main() {

    int arr[]={1,2,3,3,5};
    FindMissingNumber(arr,5);
    return 0;
}