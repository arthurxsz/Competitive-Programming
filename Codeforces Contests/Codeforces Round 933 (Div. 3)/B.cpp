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

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    bool yes = true;

    for (int i=0; i<n-2; i++){
      a[i+1] -= a[i]*2;
      a[i+2] -= a[i];
      a[i] = 0;

      if (a[i+1]<0 || a[i+2] < 0){
        yes = false;
        break;
      }
    }

    for (int i=0; i<n; i++){
      if (a[i] != 0){
        yes = false;
        break;
      }
    }

    if (yes) cout << "YES\n";
    else cout << "NO\n";
  }
}
