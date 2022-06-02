#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<string> day{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    vector<int> mon{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int n;
    cin >> n;
    while(n--){

        int m, d;
        cin >> m >> d;

        int count = 0;
        for(int i = 0; i < m; i++){
            count += mon[i];
        }

        count += d;
        cout << day[(count+5)%7] << endl;
    }

    return 0;
}