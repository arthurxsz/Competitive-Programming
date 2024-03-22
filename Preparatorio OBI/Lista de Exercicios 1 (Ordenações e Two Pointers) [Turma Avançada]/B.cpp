#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int t; cin >> t;

    while (t--){
        int n, x;
        cin >> n >> x;
        map<int, bool> a;

        for (int i=0; i<n; i++){
            int e; cin >> e;
            a[e] = true;
        }

        int ans = 0;

        while (x){
            ans++;
            if (!a[ans]) x--;
        }

        while (a[ans+1]) ans++;

        cout << ans << endl;
    }
}
