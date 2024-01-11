#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main(){
    bool A = false;
    bool B = false;

    int n; cin >> n;
    int inter;

    for (int i=0; i<n; i++){
        cin >>  inter;

        if (inter == 1) A = !A;
        else{
            A = !A;
            B = !B;
        }
    }

    cout << A << "\n";
    cout << B << "\n";
}