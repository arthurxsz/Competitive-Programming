#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	string aux = s;
	reverse(s.begin(), s.end());

	if (aux == s) cout << "Yes\n";
	else cout << "No\n";
}  
