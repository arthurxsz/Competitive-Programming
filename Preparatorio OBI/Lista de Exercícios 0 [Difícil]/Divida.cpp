#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

ll possible(ll num){
    ll ans = 0;
    while (num != 1){
        if (num%2==0) {num /= 2; ans++; continue;}
        if (num%3==0) {num /= 3; ans+=2; continue;}
        if (num%5==0) {num /= 5; ans += 3; continue;}
        
        return -1;
    }

    return ans;
}

int main(){ _
    int t; cin >> t;

    while (t--){
        ll n; cin >> n;

        cout << possible(n) << endl;
    }
}
