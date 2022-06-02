#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin >> n && n){

        string s = to_string(n);
        int len = s.size();
        if(len == 1){
            cout << n << endl;
            continue;
        }

        int ans;
        while(len != 1){

            ans = 0;

            for(int i = 0; i < len; i++){
                ans += s[i] - '0';
            }

            s = to_string(ans);
            len = s.size();
        }

        cout << ans << endl;
    }

    return 0;
}