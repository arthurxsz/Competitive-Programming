#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int t; cin >> t;
    int a, b, c;

    while (t--){
        cin >> a >> b >> c;

        if (a+b == c) cout << "+\n";
        else cout << "-\n";
    }
}
