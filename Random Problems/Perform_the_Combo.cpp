#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, m;
        string s;

        cin >> n >> m;
        cin >> s;

        vector<ll> count(n, 0);

        for (int i=0; i<m; i++){
            int p;
            cin >> p;

            count[0] += 1;
            count[p] -= 1;
        }

        for (int i=1; i<n; i++){
            count[i] += count[i-1];
        }

        vector<ll> ans(26, 0);

        for (int i=0; i<s.size(); i++){
            ans[s[i]-97] += count[i]+1;
        }

        for (int i=0; i<26; i++){
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}