#include <bits/stdc++.h>
#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main() {
  _ int t;
  cin >> t;

  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> b(n), c(m);

    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> c[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
      if (b[i] >= k)
        continue;
      for (int j = 0; j < m; j++) {
        if (b[i] + c[j] <= k)
          ans++;
      }
    }

    cout << ans << endl;
  }
}
