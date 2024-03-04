#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int t; cin >> t;
    int n;

    while (t--) {
        cin >> n;
        int pd = 0, ud = 0;

        for (int i=0; i<3; i++){
            ud += n%10;
            n /= 10;
        }
        for (int i=0; i<3; i++){
            pd += n%10;
            n /= 10;
        }

        if (pd == ud) cout << "YES\n";
        else cout << "NO\n";
    }
}
