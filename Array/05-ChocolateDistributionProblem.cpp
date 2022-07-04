#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;

    sort(arr,arr+n);

    int minNumber = INT_MAX;

    for(int i=0; (i+m-1) < n;i++) {
        int diff = arr[m+i-1] - arr[i];
        minNumber = min(minNumber,diff);
    }

    cout<<minNumber<<endl;

    return 0;
}