#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main() {
    int n, ans = 0; cin >> n;
    string gab; cin >> gab;
    string cand; cin >> cand;

    for (int i=0; i<n; i++){
        if (gab[i] == cand[i]) ans++;
    }

    cout << ans;
}