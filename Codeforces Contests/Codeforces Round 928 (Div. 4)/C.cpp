#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

int sumofdigits(int num){
    int sum = 0;

    while (num != 0){
        sum += num%10;
        num /= 10;
    }

    return sum;
}

int main(){ _
    int t; cin >> t;

    vector<int> ans(2e5 + 10);

    for (int i=1; i<2e5+1; i++){
        ans[i] = sumofdigits(i) + ans[i-1];
    }

    while (t--){
        int n; cin >> n;

        cout << ans[n] << endl;
    }
}
