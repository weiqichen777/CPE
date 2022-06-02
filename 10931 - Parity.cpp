#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin >> n and n){

        int rem;
        int count = 0;
        while(n > 0){
            rem = n % 2;
            if(rem == 1)
                count++;
            n /= 2;
        }

        cout << count << endl;
    }

    return 0;
}