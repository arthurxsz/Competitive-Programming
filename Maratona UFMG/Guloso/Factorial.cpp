#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){
    int n; cin >> n;
    int ans=0, factor=2;

    while (n){
        ans += n%factor;
        n = n/factor;
        factor++;
    }

    cout << ans;
}  
