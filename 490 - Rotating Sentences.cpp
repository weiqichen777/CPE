#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<string> v;
    string s;
    int big = INT_MIN;
    int len = 0;
    while(getline(cin, s)){
        v.push_back(s);

        len = s.size();
        big = max(big, len);
    }

    for(int i = 0; i < big; i++){

        for(int j = v.size()-1; j >= 0; j--){
            string target = v[j];
            printf("%c", target[i]);
        }

        cout << endl;

    }

    return 0;
}