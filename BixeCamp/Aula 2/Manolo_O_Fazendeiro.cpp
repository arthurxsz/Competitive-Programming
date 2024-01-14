#include "bits/stdc++.h"
using namespace std;

int main() {
    int n; cin >> n;
    int plant[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j < n; j++){
            int e; cin >> e;
            plant[i][j] = e;
        }
    }

    int q; cin >> q;
    int li, lf, ci, cf, ans = 0;
    set<tuple<int, int>> cords;
    while (q--){
        cin >> li >> ci >> lf >> cf;
        --li; --ci; --lf; --cf;
        for (int i=li; i<=lf; i++){
            for (int j=ci; j<=cf; j++){
                ans += plant[i][j];
                plant[i][j] = 0;
            }
        }
    }

    cout << ans;
}