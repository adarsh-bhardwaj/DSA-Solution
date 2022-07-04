#include<iostream>
using namespace std;

int countBit(int n){
    int count = 0;
    while (n)
    {
        count += n & 1;
        n =  n >> 1;
    }
    return count;
}

int main() {

    cout<<countBit(6);

    return 0;
}