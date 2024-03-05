#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int t; cin >> t;

    while (t--){
        int n; cin >> n;

        if ((n+1)%3==0 || (n-1)%3==0) cout << "First\n";
        else cout << "Second\n";
    }
}
