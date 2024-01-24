// wa 80%
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int n, m, ans=0;
    cin >> n >> m;
    vector<int> lock(n);

    for (int i=0; i<n; i++){
        cin >> lock[i];
    }

    for (int i=0; i<n; i++){
        if (lock[i] == m) continue;
        if (lock[i] > m){
            ans += lock[i]-m;
            lock[i+1] -= lock[i]-m;
            lock[i] -= lock[i]-m;

            if (lock[i+1] < 1) lock[i+1] = 1;
        } else {
            ans += m-lock[i];
            lock[i+1] += m-lock[i];
            lock[i] += m-lock[i];

            if (lock[i+1] > 100) lock[i+1] = 100;
        }
    }

    cout << ans << endl;
}