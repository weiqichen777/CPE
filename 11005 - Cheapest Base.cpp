#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){

        printf("Case %d:\n", i);

        vector<int> b(36);
        for(int i = 0; i < 36; i++){
            cin >> b[i];
        }

        int m;
        cin >> m;
        while(m--){

            int k;
            cin >> k;
            int small = INT_MAX;
            int cost;
            vector<int> ans(36);
            
            for(int i = 2; i <= 36; i++){
                int x = k;
                cost = 0;
                while(x > 0){
                    cost += b[x%i];
                    x /= i;
                }
                ans[i] = cost;
                small = min(small, cost);
            }

            for(int i = 2; i <= 36; i++){
                if(ans[i] == small)
                    cout << i << " ";
            }

            cout << endl;
        }
    }

    return 0;
}