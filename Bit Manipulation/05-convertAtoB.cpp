#include<iostream>
using namespace std;

int count(int Xor){
    int ans=0;
    while(Xor){
        ans += Xor & 1;
        Xor >>= 1;
    }

    return ans;
}

int checkBit(int a,int b){

    int Xor=a ^ b;
    int ans = count(Xor);
    return ans;
}

int main() {

    int a=10,b=20;

    cout<<checkBit(a,b);
    return 0;
}