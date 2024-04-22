#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;	
	vector<int> v(n); 
	
	for (auto &x: v) cin >> x;

	if (n == 1 && v[0] <= 8) {
		cout << "S\n";
		return 0;
	} else if (n==1) {
		cout << "N\n";
		return 0;
	}

	sort(v.begin(), v.end());

	if (v[0] > 8) {
		cout << "N\n";
		return 0;
	}

	for (int i=1; i<n; i++){
		if (v[i] - v[i-1] > 8){
			cout << "N\n";
			return 0;
		}
	}

	cout << "S\n";
}  
