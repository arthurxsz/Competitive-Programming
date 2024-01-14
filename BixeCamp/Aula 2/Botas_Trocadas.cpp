#include "bits/stdc++.h"
using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0;

    map<int, int> D;
    map<int, int> E;

    while (n--){
        int m; char l;
        cin >> m >> l;
        if (l == 'D'){
            if (E[m]){
                ans++;
                E[m]--;
            } else D[m]++;
        } else{
            if (D[m]){
                ans++;
                D[m]--;
            } else E[m]++;
        }
    }

    cout << ans;
}