#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        
        int m, n, ans = 0;
        cin >> m >> n;
    
        
        for(int i = m; i <= n; i++){
            if((i%2) == 1)
                ans += i;
        }
        
        cout << ans << endl;
    }

    return 0;
}


