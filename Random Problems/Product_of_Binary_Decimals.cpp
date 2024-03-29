#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    vector<int> multiples;
    for (int i=31; i>1; i--){
        int num = 0;
        for (int j=0; j<6; j++){
            if (i & (1 << j)) {
                num += (int) pow(10, j);
            }
        }
        multiples.push_back(num);
    }

    int t; cin >> t;

    while (t--){
        int n; cin >> n;

        for (int i=0; i<multiples.size(); i++){
            while (n%multiples[i] == 0) n /= multiples[i];
        }

        if (n == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
