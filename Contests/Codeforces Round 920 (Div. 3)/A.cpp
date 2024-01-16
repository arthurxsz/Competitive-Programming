#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    int x, y;
    int h, v;

    while(t--){
        vector<pair<int, int>> cords;

        for (int i=0; i<4; i++){
            cin >> x >> y;
            cords.push_back(make_pair(x, y));
        }

        for (int i=1; i<4; i++){
            if (cords[0].first == cords[i].first){
                v = abs(cords[0].second - cords[i].second);
            }
            if (cords[0].second == cords[i].second){
                h = abs(cords[0].first - cords[i].first);
            }
        }

        cout << h*v << endl;
    }
}