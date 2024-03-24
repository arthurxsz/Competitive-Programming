#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
 
using namespace std;
 
int main(){ _
    int n; cin >> n;
    map<int, vector<int>> m;
 
    for (int i=0; i<n; i++){
        int a; cin >> a;
        m[a].push_back(i);
    }
 
    vector<pii> ans;
 
    for (auto x: m){
        auto aux = x.second;
        bool progression = true;
        for (int i=1; i<aux.size(); i++){
            if (aux[i]-aux[i-1] != aux[1]-aux[0]){
                progression = false;
                break;
            }
        }
 
        if (progression) {
        	if (aux.size() > 1)
        		ans.push_back({x.first, aux[1]-aux[0]});
        	else 
        		ans.push_back({x.first, 0});
        }
    }
 
    cout << ans.size() << endl;
 
   	for (auto p: ans){
   		cout << p.first << " " << p.second << endl;
   	}
}