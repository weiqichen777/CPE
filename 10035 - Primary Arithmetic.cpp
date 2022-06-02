#include <bits/stdc++.h>
using namespace std;

int main(){

    int m, n;
    while(cin >> m >> n && m && n){

        stringstream ss;
        ss << m;
        string mm = ss.str();
        int len_mm = mm.size();

        ss << n;
        string nn = ss.str();
        int len_nn = nn.size();

        int ans = 0;
        int flag = 0;
        while(len_mm && len_nn){

            
            if(mm[len_mm-1]-'0' + nn[len_nn-1]-'0' + flag > 9){
                ans++;
                flag = 1;
            }
            else{
                flag = 0;
            }


            len_mm--;
            len_nn--;
        }

        cout << ans << endl;

    }

    return 0;
}