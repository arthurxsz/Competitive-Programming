#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;

bool possible(string str, int d){
    int range = d-1, lower = -1;
    while (1){
        if (str[range] == 'R'){
            lower = range;
            range += d;
            if (range >= str.size()) return true;
        } else range--;

        if (range == lower) return false;
    }
}

int main(){ _
    int t; cin >> t;
    string s;

    while (t--){
        cin >> s;
        int l=0, r=s.size()+1, m;
        while (l < r){
            m = (l+r)/2;
            if (m<1) break;
            if (possible(s, m)) r = m;
            else l = m+1;
        }

        cout << r << endl;
    }
}
