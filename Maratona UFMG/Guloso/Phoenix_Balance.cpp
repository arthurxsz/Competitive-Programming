#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int main(){
    int t, n, a, b; cin >> t;

    while (t--){
        cin >> n;
        a = 0;
        b = pow(2, n);
        for (int i=0; i<n/2; i++){
            a += pow(2, n-i-1);
            b += pow(2, i);
        }
        b -= 1;
        cout << abs(b-a) << endl;
    }
}
