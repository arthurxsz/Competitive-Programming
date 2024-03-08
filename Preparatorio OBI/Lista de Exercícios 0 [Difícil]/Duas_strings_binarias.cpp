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

    if (a == b) {
      cout << "YES\n";
      continue;
    }

    bool yes = false;

    for (int i = 0; i < a.size(); i++) {
      if (a[i] == '1' && b[i] == '1') {
        if (a[i - 1] == '0' && b[i - 1] == '0') {
          yes = true;
          break;
        }
        for (int j = i; j < a.size(); j++) {
          if (a[j] == '0' && b[j] == '0') {
            if (a[j + 1] == '1' && b[j + 1] == '1') {
              yes = true;
              break;
            }
            i = j;
            break;
          }
        }
      }
    }

    if (yes)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
