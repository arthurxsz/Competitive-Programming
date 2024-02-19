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
    string s;
    for (int i=0; i<t; i++){
        cin >> s;
        int a=0, b=0;
    

        for (int j=0; j<5; j++){
            if (s[j] == 'A') a++;
            else b++;
        }

        if (a>b) cout <<  'A' << endl;
        else cout << 'B' << endl;
    }
}   
