#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

string covertToKeyPatter(string str){
    string keyPad[] = {
                        "2","22","222",
                        "3","33","333",
                        "4","44","444",
                        "5","55","555",
                        "6","66","666",
                        "7","77","777","7777",
                        "8","88","888",
                        "9","99","999","9999"
                        };
    string ans ="";
    if(str.length() == 0){
        return ans;
    }

    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            ans += '0';
        }
        else {
            int c = str[i] - 'A';
            ans = ans + keyPad[c];
        }
    }

    return ans;
}

int main() {
    string str="MBMIXFQVIXXQMRUFTGGKPBPRKLRSIQLJCVTCOTKTFIMTVCJGMR";
    cout<<covertToKeyPatter(str);

    return 0;
}