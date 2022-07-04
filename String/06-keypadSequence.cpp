#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void KeypadSequence(string numkeys[],string str){
    string ans ="";
    transform(str.begin(),str.end(),str.begin(),::toupper);
    for(int i=0;i<str.size();i++){
        if(str[i] == ' '){
            ans += to_string(0);
        }
        int start = 0;
        int end = 7;
        while(start<=end){
            int mid = (start+end)/2;
            // cout<<end;
            int chend = 2;
            if(mid == 7 || mid==5) {
                chend = 3;
            }
            else {
                chend = 2;
            }

            if(numkeys[mid][0] <= str[i] && numkeys[mid][chend] >= str[i]){
                for(int j=0;j<=chend;j++){
                    ans  += to_string(mid+2);
                    if(str[i] == numkeys[mid][j] ){
                        break;
                    }
                }
                break;
            }
            else if(str[i] > numkeys[mid][0]){
                start = start + 1;
            }
            else {
                end = end-1;
            }
        }
    }
    cout<<ans;
}

int main() {
    string numKeys[] = {"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    string str = "HEY U";
    KeypadSequence(numKeys,str);

    return 0;
}