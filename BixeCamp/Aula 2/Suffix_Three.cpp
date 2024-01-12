#include "bits/stdc++.h"
using namespace std;

int main() {
    int t; cin >> t;
    string str;

    while (t--) {
        cin >> str;
        if (str.substr(str.size()-2, 2) == "po") cout << "FILIPINO\n";
        else if (str.substr(str.size()-4, 4) == "desu" || str.substr(str.size()-4, 4) == "masu")
            cout << "JAPANESE\n";
        else cout << "KOREAN\n";
    }
}