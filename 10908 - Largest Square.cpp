#include <bits/stdc++.h>
using namespace std;

int m, n, q;
vector<vector<int>> dir{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool isValid(int r, int c){

    if(r>=0 and r<m and c>=0 and c<n){
        return true;
    }
    else{
        return false;
    }
}

int find_square(int r, int c, vector<vector<char>> v){

    int d = 1; //dimension of square
    bool flag = true;
    char target = v[r][c];

    while(flag){

        d += 2;
        int R = r - d/2;
        int C = c - d/2;

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < d-1; j++){

                R += dir[i][0];
                C += dir[i][1];

                if(isValid(R,C) == false or v[R][C] != target){
                    flag = false;
                    break;
                }

            }
        }

        if(flag == false)
            break;
    }

    return d-2;

}

int main(){

    int c;
    cin >> c;
    while(c--){

        
        cin >> m >> n >> q;

        vector<vector<char>> v(m, vector<char>(n, '@'));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> v[i][j];
            }
        }

        while(q--){

            int r, c;
            cin >> r >> c;
            cout << find_square(r, c, v) << endl;

        }
    }

    return 0;
}