#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;

    if(s.size()%2){
        if(s[0]==s[s.size()/2] && s[0]==s[s.size()-1]){
            cout << "bonita\n";
        } else cout << "normalzinha\n";
    } else {
        cout << "normalzinha\n";
    }
}
