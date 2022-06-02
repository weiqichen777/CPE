#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin >> n && n){

        if(n%11 == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}