#include "bits/stdc++.h"
using namespace std;

int main(){
    string str, str2, str3;
    cin >> str;

    for (char c: str){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            str2 += c;
            str3 = c + str3;
        }
    }

    if (str2 == str3) cout << "S";
    else cout << "N";
}