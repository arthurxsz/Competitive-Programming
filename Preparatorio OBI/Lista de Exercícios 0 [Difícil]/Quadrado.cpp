#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int main(){ _
    int t; cin >> t;
    int x, y;
    pii p;

    while (t--){
        int h=0, l=0;

        cin >> x >> y;

        for (int i=0; i<3; i++){
            cin >> p.first >> p.second;

            if (x == p.first) h = abs(y-p.second);
            if (y == p.second) l = abs(x-p.first);
        }   

        cout << h*l << endl;
    }
}
