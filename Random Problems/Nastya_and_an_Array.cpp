#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int n; cin >> n;
    map<int, bool> ans;

    for (int i=0;i<n; i++){
        int a; cin >> a;
        if (a != 0) ans[a] = true;
    }

    cout << ans.size() << endl;
}
