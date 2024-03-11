#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main() {
  _ int t;
  cin >> t;

  while (t--) {
    int n;
    string s;
    cin >> n;
    cin >> s;

    vector<string> a;

    a.push_back(s);
    string aux = s;
    reverse(all(aux));
    a.push_back(aux + s);

    sort(all(a));

    cout << a[0] << endl;
  }
}
