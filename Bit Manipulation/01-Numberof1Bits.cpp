#include<iostream>
using namespace std;

int countBit(int n){
    int count = 0;
    while(n){
        n= (n & n-1);
        count++;
    }
    return count;
}

int main() {

    cout<<countBit(5);

    return 0;
}