#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

bool cmp(const pii &a, const pii &b){
    return a.second < b.second;
}

int main(){ _
    int n; cin >> n;
    int l, r;
    vector<pii> orders;

    for (int i=0; i<n; i++){
        cin >> l >> r;
        orders.push_back(make_pair(l, r));
    }

    sort(all(orders), cmp);

    int finish = orders[0].second;
    int ans = 1;

    for (int i=1; i<n; i++){
        if (orders[i].first > finish){
            ans++;
            finish = orders[i].second;
        }
    }

    cout << ans << endl;
}
