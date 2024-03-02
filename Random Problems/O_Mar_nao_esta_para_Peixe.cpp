#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int n; cin >> n;
    vector<vector<int>> mar(100, vector<int>(100, 0));
    int xi, xf, yi, yf;
    int ans = 0;

    for (int i=0; i<n; i++){
        cin >> xi >> xf >> yi >> yf;
        ans += (xf-xi) * (yf-yi);

        for (int j=xi; j<xf; j++){
            for (int k=yi; k<yf; k++){
                if (mar[j][k]) ans--;
                mar[j][k] = 1;
            }
        }
    }

    cout << ans << endl;
}
