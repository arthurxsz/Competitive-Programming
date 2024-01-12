#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main() {
    int n; cin >> n;
    vector<vector<int>> quadrado;

    for (int i=0; i<n; i++){
        vector<int> linha;
        int num;
        for (int j=0; j<n; j++){
            cin >> num;
            linha.push_back(num);
        }
        quadrado.push_back(linha);
    }

    set<int> ans;
    int diagp = 0, diags = 0;

    for (int i=0; i<n; i++){
        int lin = 0;
        int col = 0;
        for (int j=0; j<n; j++){
            lin += quadrado[i][j];
            col += quadrado[j][i];
        } 

        diagp += quadrado[i][i];
        diags += quadrado[i][n-1-i];
        ans.insert(lin);
        ans.insert(col);
    }

    ans.insert(diagp);
    ans.insert(diags);

    if (ans.size() == 1) cout << diagp;
    else cout << -1;
}