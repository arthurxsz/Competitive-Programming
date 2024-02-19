#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
 
using namespace std;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
 
int m, n;
vector<vector<int>> assis;

int countmaxballoons(int t, int z, int y, int time){
    int count = time/(z*t+y);
    int remtime = time%(z*t+y);
    int totalballoons = count*z + min(remtime/t, z);

    return totalballoons;
}
 
bool possible(int time){
    ll totalballoons = 0;
 
    for (int i=0; i<n;i++){
        int t = assis[i][0];
        int z = assis[i][1];
        int y = assis[i][2];
        assis[i][3] = countmaxballoons(t, z, y, time);
 
        totalballoons += assis[i][3];
    }
 
    if (totalballoons >= m) return true;
    else return false;
}
 
int main(){ _
    cin >> m >> n;
 
    int t, z, y;
    for (int i=0; i<n; i++){
        cin >> t >> z >> y;
        assis.push_back({t, z, y, 0});
    }
 
    int mintime=0, maxtime=1e9, time;
    while (maxtime > mintime){
        time = (mintime+maxtime)/2;
 
        if (possible(time)) maxtime = time;
        else mintime = time+1; 
    }
 
    cout << maxtime << endl;
 
    possible(maxtime);
 
    int totalballoons = 0;
    for (int i=0; i<n; i++){
        if (totalballoons+assis[i][3] <= m){
            cout << assis[i][3] << " ";
            totalballoons += assis[i][3];
        } else {
            if (totalballoons == m) cout << 0 << " ";
            else cout << m-totalballoons << " ";
            totalballoons = m;
        }
    }

    cout << endl;
}