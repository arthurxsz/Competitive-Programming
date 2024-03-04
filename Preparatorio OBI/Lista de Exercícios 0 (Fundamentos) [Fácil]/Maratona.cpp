#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _  
    int t; cin >> t;
    int a, b, c, d;

    while (t--){
        cin >> a >> b >> c >> d;
        int ans = 0;

        if (b > a) ans++;
        if (c > a) ans++;
        if (d > a) ans++;

        cout << ans << endl;
    }
}
