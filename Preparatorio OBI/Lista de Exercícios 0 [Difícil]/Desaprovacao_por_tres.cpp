#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int t; cin >> t;

    while (t--){
        int k; cin >> k;
        int ans = 0;

        while (k--){
            ans++;
            while(ans%3==0 || ans%10 == 3) ans++;
        }

        cout << ans << endl;
    }
}
