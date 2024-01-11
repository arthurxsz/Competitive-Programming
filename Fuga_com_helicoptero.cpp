#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main(){
    int h, p, f, d;
    cin >> h >> p >> f >> d;

    while (true){
        if (f == h){
            cout << "S";
            break;
        } 
        if (f == p){
            cout << "N";
            break;
        }
        
        if (f == 0 && d == -1) f = 16;
        if (f == 15 && d == 1) f = -1;
        f += d;
    }
}