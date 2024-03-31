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
        string s; cin >> s;

        int ans = n;

        for (int i=1; i<n; i++){
            if (n%i == 0){
                int diffpre = 0, diffsu = 0;
                string prefix = s.substr(0, i);
                string sufix = s.substr(n-i);
                for (int j=0; j<n; j += i){
                    string cur = s.substr(j, i);
                    if (prefix != cur){
                        for (int k=0; k<i; k++){
                            if (cur[k] != prefix[k]) diffpre++;
                        }
                    }
                    if (sufix != cur){
                        for (int k=0; k<i; k++){
                            if (cur[k] != sufix[k]) diffsu++;
                        }
                    }
                }

                if (diffpre <= 1 || diffsu <= 1) {
                    ans = i;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
}
