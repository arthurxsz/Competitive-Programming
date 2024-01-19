#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){
    int t; cin >> t;
    int x, n, m;

    while (t--){
        cin >> x >> n >> m;

        for (int i=0; i<n; i++) {
            if (x <= 10) break;
            x = floor(x/2) + 10;
        }
        x -= 10*m;
        if (x <= 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
