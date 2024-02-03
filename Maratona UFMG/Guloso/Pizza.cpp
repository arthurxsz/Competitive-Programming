#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int n, k, ans=0, tmp=0; cin >> n;
    vector<int> prefixsum(n+1, 0);

    for (int i=0; i<n; i++){
        cin >> k;
        tmp = max(0, tmp + k);
        ans = max(ans, tmp);
        prefixsum[i+1] = prefixsum[i] + k;
    }

    int best=0;
    for (int i=0; i<=n; i++){
        best = max(best, prefixsum[i]);
        ans = max(ans, best + prefixsum[n] - prefixsum[i]);
    }

    cout << ans << endl;
}
