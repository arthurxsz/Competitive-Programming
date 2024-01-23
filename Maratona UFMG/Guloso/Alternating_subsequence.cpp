#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int t; cin >> t;

    while(t--){
        ll ans=0, greater=-INF;
        int n; cin >> n;
        int a[n];

        for (int i=0; i<n; i++){
            cin >> a[i];
            
            if (greater > 0 && a[i] < 0 || greater < 0 && a[i] > 0 && greater != -INF){
                ans += greater;
                greater = a[i];
            } else if (a[i] > greater) greater = a[i];
        }

        ans += greater;

        cout << ans << endl;
    }
}
