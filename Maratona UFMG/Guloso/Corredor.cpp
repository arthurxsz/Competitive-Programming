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
    vector<int> cor(n);

    for (int i=0; i<n; i++){
        cin >> cor[i];
    }

    int sum=0, ans=0;

    for (int i=0; i<n; i++){
        sum += cor[i];
        if (sum < 0) sum = 0;
        if (sum > ans) ans = sum;
    }

    cout << ans << endl;
}
