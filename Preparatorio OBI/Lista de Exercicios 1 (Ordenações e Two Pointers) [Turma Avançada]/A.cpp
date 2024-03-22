#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
 
using namespace std;
 
int main(){ _
	int n, m;
	cin >> n >> m;
 
	vector<int> a(n);
	vector<int> b(m);
 
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;
 
	sort(all(a));
 
	for (int i=0; i<m; i++){
		cout << upper_bound(all(a), b[i])-a.begin() << " ";
	}
}