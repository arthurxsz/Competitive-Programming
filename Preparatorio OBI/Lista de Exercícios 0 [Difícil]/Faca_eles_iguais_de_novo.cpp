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
        vector<int> a(n);

        for (int i=0; i<n; i++){
            cin >> a[i];
        }

        int maioresq = 1;
        int maiordir = 1;

        for (int i=1; i<n; i++){
            if (a[i] == a[i-1]) maioresq++;
            else break;
        }

        for (int i=n-1; i>0; i--){
            if (a[i] == a[i-1]) maiordir++;
            else break;
        }

        if (maioresq == n) {
            cout << 0 << endl;
            continue;
        }

        if (a[0] == a[n-1]) cout << n-maiordir-maioresq << endl;
        else {
            if (maioresq > maiordir) cout << n-maioresq << endl;
            else cout << n-maiordir << endl;
        }
    }
}
