#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    map<int, int> esq = {{0, 1}};
    map<int, int> dir = {{n-1, 1}};

    for (int i=0; i<n-1; i++) {
        esq[i+1] = min(esq[i]+1, a[i+1]);
        dir[n-2-i] = min(dir[n-1-i]+1, a[n-2-i]);
    }
    
    int ans=1;

    for (int i=0; i<n; i++){
        if (min(esq[i], dir[i]) > ans) ans = min(esq[i], dir[i]);
    }

    cout << ans << endl;
}
