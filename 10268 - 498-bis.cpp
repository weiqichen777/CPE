#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    
    while(cin >> n){
        
        getchar();
        
        vector<int> v;
        string s;
        getline(cin, s);
        stringstream ss(s);
        
        while(ss >> s){
            v.push_back(stoi(s));
        }
        
        v.pop_back();
        reverse(v.begin(), v.end());
        
        int ans = 0;
        for(int i = 0; i < v.size(); i++){
            ans += v[i] * (i+1) * pow(n, i);
        }
        
        cout << ans << endl;
        
    }

    return 0;
}


