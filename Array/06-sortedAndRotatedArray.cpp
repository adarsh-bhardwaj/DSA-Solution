#include<iostream>
using namespace std;

int BinarySearch(int arr[],int start,int end,int key){
    
    while(start<=end){
        int mid = (start+end)/2;

        if(arr[mid] ==  key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        else {
            start = mid + 1;
        }
    }
    
    return -1;
}

int pivot(int arr[],int n) {

    int start = 0;
    int end = n-1;
    int mid = (start + end) / 2;
    
    while(mid >=0 && mid < n ){
        if(arr[mid] > arr[mid+1]){
            // cout<<mid<<endl;
            return mid;
        }
        else if(arr[mid] < arr[0]){
            mid--;
        }
        else {
            mid++;
        }

    }
    return -1;
}

int findElement(int arr[],int n,int key){
    int pivotElement = pivot(arr,n);
    if(pivotElement == -1){
        return BinarySearch(arr,0,n-1,key);
    }
    else if(arr[pivotElement] == key){
        return pivotElement;
    }
    else if(arr[0] <= key){
        return BinarySearch(arr,0,pivotElement-1,key);
    }
    else {
        return BinarySearch(arr,pivotElement+1,n-1,key);
    }
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<findElement(arr,n,key);
    return 0;
}