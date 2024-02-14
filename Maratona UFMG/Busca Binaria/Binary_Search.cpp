#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
 
using namespace std;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
 
int n, k, e;
 
bool binarysearch(vector<int> array, int e){
    int l = 0, r = n;
    int m;
 
    while (l < r){
        m = (l+r)/2;
        if (array[m]==e) return true;
        if (array[m] < e) l = m+1;
        else r = m;
    }
    return false;
}
 
int main(){ _
    cin >> n >> k;
 
    vector<int> array(n);
    
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
 
    for (int i=0; i<k; i++){
        cin >> e;
        if (binarysearch(array, e)) cout << "YES\n";
        else cout << "NO\n";
    }
}