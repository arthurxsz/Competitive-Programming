#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> fita(n);  

    for (int i = 0; i < n; i++) {
        cin >> fita[i]; 
        if (fita[i]==-1) fita[i] = 9;
    }

    int dis = 9;

    for (int i = 0; i < n; i++) {
        if (fita[i] == 0) dis = 0;
        fita[i] = min(dis, fita[i]);
        dis++;
    }

    dis = 9;

    for (int i = n - 1; i >= 0; i--) {
        if (fita[i] == 0) dis = 0;
        fita[i] = min(dis, fita[i]);
        dis++;
    }

    for (int i = 0; i < n; i++) {
        cout << fita[i] << " ";
    }
}