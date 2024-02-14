#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int t; cin >> t;
    ll n, k;

    while (t--){
        cin >> n >> k;
        if (k < n){
            cout << k << endl;
            continue;
        }
        for (ll i=(k*n)/(n-1); i > (k*n)/(n-1) - n; i--){
            if (i%n == 0) continue;
            if (i/n * (n-1) + (i%n) == k) {
                cout << i << endl;
                break;
            }
        } 
    }
}
