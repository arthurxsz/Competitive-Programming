#include "bits/stdc++.h"
using namespace std;

int main() {
    int n; cin >> n;
    int tab[n][n];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &tab[i][j]);
        }
    }

    int linha[n], coluna[n];

    for (int i=0; i<n; i++){
        int suml=0, sumc=0;
        for (int j=0; j<n; j++){
            suml += tab[i][j];
            sumc += tab[j][i];
        }

        linha[i] = suml;
        coluna[i] = sumc;
    }

    int max=0, ans;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            ans = linha[i] + coluna[j] - tab[i][j]*2;
            if (ans > max) max = ans;
        }
    }

    cout << max;
}