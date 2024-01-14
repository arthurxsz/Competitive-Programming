#include "bits/stdc++.h"
using namespace std;

int main() {
    int k; cin >> k;
    bool no = false;
    string str;
    map<int, int> m;

    for (int i=0; i < 4; i++){
        cin >> str;
        for (int j=0; j<4; j++){
            if (str[j] != '.') m[str[j] - '0']++;
        }
    }

    for (int i=0; i<=9; i++){
       if (m[i] > k*2) no = true;
    }

    if (no) cout << "NO";
    else cout << "YES";
}