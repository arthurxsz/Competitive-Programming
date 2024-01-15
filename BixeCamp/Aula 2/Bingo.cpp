#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main(){
    int n, b;
    while (true){
        cin >> n >> b;
        if (n+b == 0) break;
        int nums[b];
        set<int> ans;
        for (int i=0; i<b; i++) cin >> nums[i];

        for (int i=0; i<b-1; i++){
            for (int j=i+1; j<b; j++){
                ans.insert(abs(nums[i] - nums[j]));
            }
        }

        if (ans.size() == n) cout << "Y\n";
        else cout << "N\n";
    }
}