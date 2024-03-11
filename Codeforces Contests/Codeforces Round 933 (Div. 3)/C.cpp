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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;

    if (n < 3) {
      cout << ans << endl;
      continue;
    }

    for (int i = 0; i < n - 2; i++) {
      if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
        ans++;
        i += 2;
        continue;
      }
      if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
        ans++;
        i += 2;
        continue;
      }
    }

    cout << ans << endl;
  }
}
