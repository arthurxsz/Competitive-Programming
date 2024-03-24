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
        vector<int> v(n);

        for (int i=0; i<n; i++){
            cin >> v[i];
        }

        int ans = 0;

        for(int i=0; i<n; i++){
            int l=0, r=1, sum;
            sum = v[l]+v[r];

            while (l < r && r < n){
                if (sum == v[i]) {
                    ans++; break;
                }
                if (sum < v[i]) {
                    r++;
                    sum += v[r];
                }
                else {
                    sum -= v[l];
                    l++;
                    if (l == r) {
                        r++;
                        sum += v[r];
                    }
                }
            }
        }

        cout << ans << endl;
    }    
}
