#include <bits/stdc++.h>
using namespace std;

int main(){

    double x1, y1;
    double x2, y2;
    double x3, y3;

    while(cin >> x1 >> y1 >> x2 >> y2 >> x2 >> y2 >> x3 >> y3){

        double dx = x3 - x2;
        double x = x1 + dx;

        double dy = y2 - y1;
        double y = y3 - dy;

        cout << fixed << setprecision(3) << x << " " << fixed <<  setprecision(3) << y << endl;
    }

    return 0;
}