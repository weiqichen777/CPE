#include <bits/stdc++.h>

using namespace std;

int main(){

    int m, n;
    while(cin >> m >> n){

        int ans = INT_MIN;
        for(int i = m; i <= n; i++){

            int target = i;
            int count = 1;
            while(target != 1){
                if(target%2 == 0)
                    target /= 2;
                else
                    target = 3*target + 1;

                count++;
            }
            ans = max(ans, count);
        }

        printf("%d %d %d\n", m, n, ans);

    }

    return 0;
}