#include <bits/stdc++.h>
using namespace std;

int main(){

    int c;
    cin >> c;
    while(c--){

        int x1, y1;
        int x2, y2;
        int n = 0, step1, step2;

        cin >> x1 >> y1 >> x2 >> y2;

        n = x1 + y1 - 1;
        
        if(x1 == 0 and y1 == 0){
            step1 = 0;
        }
        else{
            step1 = (n*n + 3*n) / 2 + (x1+1);
        }
        

        n = x2 + y2 - 1;

        if(x2 == 0 and y2 == 0){
            step2 = 0;
        }
        else{
            step2 = (n*n + 3*n) / 2 + (x2+1);
        }

        int ans = step2 - step1;

        cout << ans << endl;
    }

    return 0;
}