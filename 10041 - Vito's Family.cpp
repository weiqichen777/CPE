#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    while(n--){

        int m;
        cin >> m;

        vector<int> v;
        int temp;
        for(int i = 0; i < m; i++){
            cin >> temp;
            v.push_back(temp); 
        }

        int sum;
        int ans = INT_MAX;
        for(int i = 0; i < m; i++){

            sum = 0;

            for(int j = 0; j < m; j++){
                
                if(i != j){
                    sum += abs(v[i]-v[j]);
                }
                
            }

            ans = min(ans, sum);
        }

        cout << ans << endl;

    }

    return 0;
}