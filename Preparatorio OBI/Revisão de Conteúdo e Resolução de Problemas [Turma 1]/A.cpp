#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y, z;
    char c1, c2;

    cin >> x >> y >> z >> c1 >> c2;

    if ((x+y)%z==0 && c1%2 && abs(c2-c1)>=4)
        cout << "feliz\n";
    else if (z==1){
        if ((x+y)%(z+1)==0 && c1%2 && abs(c2-c1)>=4) cout << "meio feliz\n";
        else cout << "triste\n";
    } else if (((x+y)%(z+1) == 0 || (x+y)%(z-1)==0) && c1%2 && abs(c2-c1)>=4)
        cout << "meio feliz\n";
    else cout << "triste\n";
}
