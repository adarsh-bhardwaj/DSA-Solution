#include<iostream>
using namespace std;

bool power2(int n){
    if(n==0){
        return 0;
    }
    return !(n & (n-1));
}

int main() {
    int n;
    cin>>n;

    bool ans = power2(n);
    cout<<ans<<endl;
    return 0;
}