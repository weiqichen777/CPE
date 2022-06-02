#include <bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> m;
    string s, name;

    int n;
    cin >> n;
    while(n--){

        cin >> s;
        getline(cin, name);

        if(m.find(s) == m.end()){
            m.insert({s,1});
        }
        else{
            m[s]++;
        }
    }

    for(auto e: m){
        cout << e.first << " " << e.second << endl;
    }

    return 0;
}