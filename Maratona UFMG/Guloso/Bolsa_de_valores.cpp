// WA 60%
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){ _
    int n, c; 
    cin >> n >> c;
    vector<int> p(n);
    vector<int> profit(n+1, 0);

    for (int i=0; i<n; i++){
        cin >> p[i];
    }

    for (int i=0; i<n; i++){
        profit[i+1] = p[i+1]-p[i];
    }

    int ans=0, aux=0, sum=0;

    for (int i=0; i<n; i++){
        sum += profit[i];
        if (sum > aux) aux = sum;
        if (sum < 0 || (sum < c && aux>c)){
            sum = 0;
            if (aux-c > 0) {
                ans += aux-c;
                aux = 0;
            }
        }
    }

    if (aux-c > 0) ans += aux-c;
    cout << ans << endl;
}