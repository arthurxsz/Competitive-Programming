#include "bits/stdc++.h"
using namespace std;

long long power(int q){
    long long s=1;
    for (int i=0; i<q; i++) s *= 2;
    return s;
}

int main() {
    int n, m, e;
    cin >> n >> m;
    int table[n][m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &table[i][j]);
        }
    }

    long long ans=0;

    for (int i=0; i<n; i++){
        int q1=0, q0=0;
        for (int j=0; j<m; j++){
            if (table[i][j] == 1) q1++;
            else q0++;
        }
        ans += power(q0) - 1;
        ans += power(q1) - 1;
    }

    for (int i=0; i<m; i++){
        int q1=0, q0=0;
        for (int j=0; j<n; j++){
            if (table[j][i] == 1) q1++;
            else q0++;
        }
        ans += power(q0) - 1;
        ans += power(q1) - 1;
    }

    ans -= m*n;

    cout << ans;
}