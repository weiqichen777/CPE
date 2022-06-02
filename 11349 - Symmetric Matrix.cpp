#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        
        for(int i = 0; i < 4; i++){
            getchar();
        }
        
        int r;
        cin >> r;
        
        vector<vector<int>> v(r, vector<int>(r, 0));
        for(int i = 0; i < r; i++){
            for(int j = 0; j < r; j++){
                cin >> v[i][j];
            }
        }
        
        bool flag = true;
        for(int i = 0; i < r; i++){
            for(int j = i+1; j < r; j++){
                if(v[i][j] != v[r-1-i][r-1-j]){
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag)
            cout << "Symmetric." << endl;
        else
            cout << "Non-symmetric." << endl;
    }

    return 0;
}


