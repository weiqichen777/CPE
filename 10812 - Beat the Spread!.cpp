#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        
        int s, d;
        cin >> s >> d;
        
        int x, y;
        x = (s+d)/2;
        y = s-x;
        
        if(x<0 or y<0){
            cout << "impossible" << endl;
        }
        else
            cout << x << " " << y << endl;
    }

    return 0;
}


