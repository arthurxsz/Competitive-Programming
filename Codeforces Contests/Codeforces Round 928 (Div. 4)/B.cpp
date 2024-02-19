#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int t; cin >> t;

    while (t--){
        int n; cin >> n;
        vector<int> grid;

        for (int i=0; i<n; i++){
            string s; cin >> s;
            int row = count(all(s), '1');
            grid.push_back(row);
        }

        bool square = false;
        int count = 1;

        for (int i=0; i<n-1; i++){
            if (grid[i] == grid[i+1] && grid[i] != 0) {
                count++;
                if (grid[i] == count){
                    square = true;
                    break;
                }
            } else count = 1;
        }

        cout << (square ? "SQUARE\n" : "TRIANGLE\n");
    }
}
