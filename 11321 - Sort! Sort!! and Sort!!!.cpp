#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){

    
    if(a.second == b.second){

        if(a.first%2 == 1 and b.first%2 == 0)
            return a.first > b.first;

        if(a.first%2 == 0 and b.first%2 == 1)
            return b.first > a.first;

        if(a.first%2 == 1 and b.first%2 == 1)
            return a.first > b.first;

        if(a.first%2 == 0 and b.first%2 == 0)
            return a.first < b.first;
    }
    
    if(a.second > b.second){

        return a.second < b.second;
    }
}

void sort(map<int, int> map){
    
    vector<pair<int, int>> v;
    for(auto e: map){
        v.push_back(e);
    }

    sort(v.begin(), v.end(), cmp);

    for(auto e: v){
        cout << e.first << endl;
    }
}

int main(){

    int n, m;
    while(cin >> n >> m and n and m){

        map<int, int> map;

        int temp, res;
        while(n--){
            
            cin >> temp;
            res = temp % m;
            map.insert({temp, res});
        }

        sort(map);


    }

    return 0;
}