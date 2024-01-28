#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> c(m);
    vector<int> ans;
    int sumc = 0;

    for (int i=0; i<m; i++){
        cin >> c[i];
        sumc += c[i];

        ans.insert(ans.end(), c[i], i+1);
    }

    ans.insert(ans.begin(), n-sumc, 0);

    if (sumc+(m+1)*(d-1) < n) cout << "NO" << endl; // sum of the length all platforms + max length of jumps over water
    else{
        cout << "YES" << endl;

        int count = 0;
        int edge = n-sumc;

        for (int pos = d-1; pos<n; pos += d-1){
            if (ans[pos]) break;

            for (int i=0; i<c[count]; i++){
                swap(ans[pos], ans[edge++]);
                pos++;
            }
            count++;
        }

        for (int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
    }
}
