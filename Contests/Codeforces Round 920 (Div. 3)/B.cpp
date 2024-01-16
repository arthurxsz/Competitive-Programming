#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    string s, f;

    while (t--){
        int n; cin >> n;
        cin >> s;
        cin >> f;

        int cf=0, cs=0;

        for (int i=0; i<n; i++){
            if (s[i]=='1' && f[i]=='1') continue;
            if (s[i]=='1') cs++;
            if (f[i]=='1') cf++;
        }

        int ans;

        if (cs-cf<0) ans = cf;
        else ans = cf + cs-cf;

        cout << ans << endl;
    }
}