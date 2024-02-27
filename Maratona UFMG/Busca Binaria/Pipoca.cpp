#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

using namespace std;

int n, c, t;
int sacos[100000];

bool possible(ll time){
    int comp = 1;
    ll max_pipoca = time*t;

    for (int i=0; i<n; i++){
        if (max_pipoca >= sacos[i]) max_pipoca -= sacos[i];
        else {
            comp++;
            max_pipoca = time*t;
            i--;
        }

        if (comp > c) return false;
    }

    return true;
}

int main(){ _
    cin >> n >> c >> t;

    for (int i=0; i<n; i++){
        cin >> sacos[i];
    }

    int l=0, r=1e9, m;

    while (l < r){
        m = (l+r)/2;

        if (possible(m)) r = m;
        else l = m+1;
    }

    cout << r << endl;
}