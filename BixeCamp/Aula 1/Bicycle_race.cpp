#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main(){
    int n; cin >> n;
    int x1, x2, y1, y2;
    int dir, lastdir = 1; // up=1, right=2, down=3, left=4

    int ans = 0;

    cin >> x1 >> y1; 
    cin >> x2 >> y2;

    for (int i=0; i < n-1; i++){
        cin >> x1 >> y1; 
        if (x1==x2){
            if (y1 < y2) dir = 3;
            else dir = 1;
        } else {
            if (x1 < x2) dir = 4;
            else dir = 2;
        }

        if (dir == 1 and lastdir == 2) ans++;
        if (dir == 4 and lastdir == 1) ans++;
        if (dir == 2 and lastdir == 3) ans++;
        if (dir == 3 and lastdir == 4) ans++;

        x2 = x1; y2 = y1;
        lastdir = dir;
    }

    cout << ans;
}