#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int n; cin >> n;
    vector<int> a(n);

    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int k; cin >> k;
    int l, r, ans;

    sort(all(a));

    while (k--){
        cin >> l >> r;
        ans = upper_bound(all(a), r) - lower_bound(all(a), l);
        cout << ans << " ";
    }
}
