#include<iostream>
using namespace std;

int FindSetBit(int n){

    int pos = 0;
    int counter = 0;
    int flag = 0;
    while(n){
        if((n & 1) ) {
            pos = counter;
            flag++;
        }
        counter ++;
        n =  n >> 1;
    }

    if(flag != 1 || flag == 0 ){
        return -1;
    }
    else {
        return pos+1;
    }

}

int main() {
    
    int n;
    cin>>n;

    int ans = FindSetBit(n);
    cout<<ans;
    return 0;
}