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
    ll x, y, a, b, ans;

    while (t--) {
        cin >> x >> y;
        cin >> a >> b;
        ans = 0;

        while (x || y){
            if (!x || !y){
                if (!x){
                    if (y > 0){ans+=a*y; y=0;}
                    else {ans+=a*(-y); y=0;}
                } else{
                    if (x > 0){ans+=a*x; x=0;}
                    else {ans+=a*(-x); x=0;}
                }
            }
            if (x > 0 && y > 0){
                if ((x+y)*a <  b*min(x, y) + abs(x-y)*a){
                    ans += a*(x+y);
                    x=y=0;
                    continue;
                }
                ans += b*min(x, y);
                if (x == y) {x=0; y=0;}
                if (x < y) {y-=x; x=0;}
                else {x-=y; y=0;}
            }
            if (x < 0 && y < 0){
                if (-(x+y)*a <  b*(-max(x, y)+abs(x+y)*a)){
                    ans += -a*(x+y);
                    x=y=0;
                    continue;
                }
                ans += b*(-max(x, y));
                if (x == y) {x=0; y=0;}
                if (x > y) {y+=x; x=0;}
                else {x+=y; y=0;}
            }
        }

        cout << ans << endl;
    }
}
