#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int n, m;
    ll ans=0; 
    cin >> n >> m;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    int ant = min(a[0], abs(a[0]-m));
    ans += ant;

    for (int i=1; i<n; i++){

        if (a[i] < ant && abs(a[i]-m) < ant){
            ans = -1;
            break;
        } else{
            if (min(a[i], abs(a[i]-m)) >= ant){
                ans += min(a[i], abs(a[i]-m));
                ant = min(a[i], abs(a[i]-m));
            }
            else{
                ans += max(a[i], abs(a[i]-m));
                ant = max(a[i], abs(a[i]-m));
            }
        }
    }   

    cout << ans << endl;
}