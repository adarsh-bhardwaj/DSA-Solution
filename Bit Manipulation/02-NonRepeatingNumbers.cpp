#include<iostream>
using namespace std;

int getBit(int n,int pos){
    return (n & (1<<pos) != 0);
}

void NonRepeating(int arr[],int n){

    int f_number=0,total=0;
    for(int i=0;i<n;i++) {
        total ^=arr[i];
    }
    int setBit=1;
    int temp = total;
    int pos = 0;
    while(setBit != 1){
        setBit = total & 1;
        pos++;
        total >>= 1;
    }
    for(int i=0;i<n;i++){
        if(getBit(arr[i],pos-1)){   
            f_number = f_number ^ arr[i];
        }
    }
    cout<<f_number<<endl;
    cout<< (temp ^ f_number)<<endl;
    return;
}

int main() {

    int arr[] ={1,2,3,4,1,2};
    NonRepeating(arr,6);

    return 0;
}