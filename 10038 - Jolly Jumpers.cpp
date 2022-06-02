#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin >> n){

        vector<int> v;
        int m;
        cin >> m;
        v.push_back(m);
        n--;

        bool flag = true;
        vector<int> diff;
        while(n--){
            cin >> m;
            int d = abs(m - v.back());

            if(find(diff.begin(), diff.end(), d) == diff.end()){
                diff.push_back(d);
            }
            else{
                flag = false;
            }
            
            v.push_back(m);
        }

        if(flag)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
        


    }

    return 0;
}