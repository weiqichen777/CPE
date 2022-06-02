#include <bits/stdc++.h>

using namespace std;

int main(){

    int m, n;
    while(cin >> m >> n and m and n){
        
        int count = 0;
        double temp;
        for(int i = m; i <= n; i++){
            temp = sqrt(i);
            if(pow(temp, 2) == i){
                count++;
            }
        }
        
        cout << count << endl;
    }

    return 0;
}


