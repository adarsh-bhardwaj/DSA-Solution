#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

bool anagram(string s1,string s2){

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1.size() !=  s2.size()){
        return false;
    }
    else {
        for(int i=0;i<s1.size();i++){
            if(s1[i] !=  s2[i]){
                return false;
            }
        }
    }
    return true;
}

int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    cout<<anagram(s1,s2);
}