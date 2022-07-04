#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string spaceRemover(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='0' && str[i] <= '9'){
            continue;
        }
        if(str[i]<'a' || str[i]>'z'){
            str.erase(i,1);
            i--;
        }
       
    }
    return str;
}

bool  palindromeChecker(string str) {
    string newStr = spaceRemover(str);
    // cout<<newStr;
    int n = newStr.size()/2;
    for(int i=0;i<n;i++) {
        if(newStr[i] != newStr[newStr.size()-i-1]){
            return false;
        }
    }

    return true;
}

int main() {

    string str= "5P";
    transform(str.begin(),str.end(),str.begin(),::tolower);
    // cout<<str;

    bool flag = palindromeChecker(str);
    cout<<flag;
    return 0;
}