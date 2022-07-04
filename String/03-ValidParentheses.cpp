#include<iostream>
#include<string.h>

using namespace std;

int main() {

    string s= "()";
    int ob=0;
    
    for(int i=0;i<s.size();i++){
        if(s[i] == '('){
            ob++;
        }
        if(s[i] == ')'){
            ob--;
        }
    }
    cout<<ob;
    return 0;
}