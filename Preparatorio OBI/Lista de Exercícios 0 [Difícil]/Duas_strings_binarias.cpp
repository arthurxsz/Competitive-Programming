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
    string a, b;
    cin >> a;
    cin >> b;

    bool yes = false;

    for (int i = 1; i < a.size(); i++) {
      if (a[i - 1] == '0' && a[i] == '1' && b[i - 1] == '0' && b[i] == '1') {
        yes = true;
        break;
      }
    }

    if (yes)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
