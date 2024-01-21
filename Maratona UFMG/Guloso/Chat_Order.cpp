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
    string lista[n];

    for (int i=0; i<n; i++){
        cin >> lista[i];
    }

    unordered_map<string, bool> ans;

    for (int i=n-1; i >= 0; i--){
        if (!ans[lista[i]]){
            cout << lista[i] << endl;
            ans[lista[i]] = true;
        }
    }
}
