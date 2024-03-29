#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int n, d;
    cin >> n >> d;
    vector<pii> v(n);

    for (int i=0; i<n; i++){
        int m, s;
        cin >> m >> s;
        v[i] = {m, s};
    }

    sort(all(v));

    ll l=0, r=0, sum = 0, ans = 0;

    while (r<n){
        if (v[r].first-v[l].first < d) {
            sum += v[r].second;
            r++;
        } else {
            sum -= v[l].second;
            l++;
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
}
