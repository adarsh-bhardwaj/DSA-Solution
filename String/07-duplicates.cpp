#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void checkduplicate(string str){
    int counter=1;
    for(int i=1;i< str.size();i++){
        if(str[i-1] ==  str[i]){
            counter++;
        }
        else {
            if(counter !=1){
                if(str[i-1] == ' '){
                    cout<<"space"<<" , "<<counter<<endl;
                }
                else {
                    cout<<str[i-1]<<" , "<<counter<<endl;
                }
            }
            counter = 1;
        }
    }
    return;
}

int main() {
    string str = "abaacdec";
    sort(str.begin(),str.end());
    checkduplicate(str);

    return 0;
}