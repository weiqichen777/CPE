#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){

    return a.second > b.second;
}

void sort(map<char, int> m){

    vector<pair<char, int>> v;

    for(auto it: m){
        v.push_back(it);
    }

    sort(v.begin(), v.end(), cmp);
    for(auto e: v){
        cout << e.first << " " << e.second << endl;
    }
}

int main(){

    int n;
    cin >> n;

    string s = " ";
    map<char, int> m;
    while(cin >> s){

        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])){
                char target = toupper(s[i]);
                if(m.find(target) == m.end()){
                    m.insert({target, 1});
                }
                else{
                    m[target]++;
                }
            }
        }
    }

    sort(m);

    return 0;
}