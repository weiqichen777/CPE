#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int lab = 0;
    while(getline(cin, s)){

        for(int i = 0; i < s.size(); i++){
            char target = s[i];
            if(target == '"'){
                
                lab++;

                if(lab%2 == 1)
                    cout << "``";
                if(lab%2 == 0)
                    cout << "''";
            }
            else{
                cout << target;
            }
        }

        cout << endl;
    }

    return 0;
}