#include<iostream>
#include<string.h>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    string strs[] ={"flower","low","light"};
    int n = sizeof(strs)/sizeof(strs[0]);
    int minSize = INT_MAX;

    for(int i=0;i<n;i++){
        if(minSize > strs[i].length()){
            minSize = strs[i].length();
        }
    }

    string prefix = "";
    bool flag = 0;

    if(n==1){
        prefix+= strs[0];
    }

    for(int i=0;i<minSize;i++){
        for(int j=1;j<n;j++){
            if(strs[j-1][i] == strs[j][i]){
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }
        if(flag){
            prefix += strs[0][i];
        }
        else {
            break;
        }
    }

    cout<<prefix;
    return 0;
}