#include <bits/stdc++.h>
using namespace std;

int main(){

    int ear = 6440;
    double s, a;
    string unit;
    double arc, chord;
    while(cin >> s >> a >> unit){

        if(unit == "min")
            a /= 60;

        if(a > 180)
            a = 360 - a;

        arc = 2 * M_PI * (s+ear) * a/360;
        chord = 2 * (s+ear) * cos((90-a/2)/180*M_PI);

        cout << fixed << setprecision(6) << arc << " " << chord << fixed << setprecision(6) << endl;
        

    } 


    return 0;
}