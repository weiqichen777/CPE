#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){

        string a, b;
        cin >> a >> b;

        int ret = __gcd(stoi(a, nullptr ,2), stoi(b, nullptr, 2));

        if(ret != 1)
            cout << "All you need is love!" << endl;
        else
            cout << "Love is not all you need!" << endl;
    }

    return 0;
}