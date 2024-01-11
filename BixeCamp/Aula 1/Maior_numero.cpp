#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main(){
	int n, max = 0;
	cin >> n;
	
	while (n){
		if (n > max) max = n;
		cin >> n;	
	}
	
	cout << max;
}