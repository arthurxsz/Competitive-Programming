#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int t; cin >> t;
    vector<int> v(3);

    while (t--) {
        cin >> v[0] >> v[1] >> v[2];    
        sort(all(v));

        cout << v[1] << endl;
    }
}
