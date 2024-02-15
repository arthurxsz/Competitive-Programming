#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int n, k;
int a[100001];

bool possible(double v){
    int p=0;
    for (int i=0; i<n; i++){
        p += a[i]/v;
    }

    if (p >= k) return true;
    else return false;
}

int main(){ _
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> a[i];

    double eps = 1e-7;
    double l = 0, r = 1e7, m;

    while (r-l > eps){
        m = (l+r)/2;

        if (possible(m)) l = m;
        else r = m;
    }

    cout << fixed << setprecision(6);
    cout << l << endl;
}
