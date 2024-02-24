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
        vector<ll> a(n);

        for (int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(all(a));

        int l=0, r=n-1, ans = n;
        int inf = (1 << 31) - 1;

        while (l < r){
            if (a[l]+a[r]== inf){
                ans--;
                l++;
                r--;
            } else{
                if (a[l]+a[r] > inf) r--;
                else l++;
            }
        }

        cout << ans << endl;
    }
    
}