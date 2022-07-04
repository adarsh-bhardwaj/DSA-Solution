#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    for(int i=1;i<str.size();i++){
        if(str[i] == str[i-1]){
            str.erase(i-1,1);
            i--;
        }
    }
    cout<<str;

    return 0;
}