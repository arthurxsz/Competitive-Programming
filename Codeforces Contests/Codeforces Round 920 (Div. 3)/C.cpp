#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;   
    ll n, f, a, b;

    while (t--){
        cin >> n >> f >> a >> b;
        vector<ll> m(n+1);
        for (ll i=0; i<n; i++){
            scanf("%d", &m[i]);
        }

        if (m[0] > b || b < a*m[0]) f -= b;
        else f -= a*(m[0]);

        if (n>1){
            for (ll i=0; i<n-1; i++){
                if (m[i+1]-m[i] > b || b < a*(m[i+1]-m[i])) f -= b;
                else f -= a*(m[i+1]-m[i]);
            }
        }

        if (f <= 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}