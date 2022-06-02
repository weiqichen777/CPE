#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> f(501);
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i < 501; i++){
        f[i] = f[i-1] + f[i-2];
    }

    int n;
    cin >> n;
    while(n--){

        int m;
        cin >> m;

        int idx = 1;
        while(f[idx] <= m){
            idx++;
        }

        bool flag = false;
        for(int i = idx; i > 1; i--){
            if(m >= f[i]){
                m -= f[i];
                cout << "1";
                flag = true;
            }
            else if(flag){
                cout << "0";
            }
        }

        cout << endl;

    }

    return 0;
}