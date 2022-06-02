#include <bits/stdc++.h>
using namespace std;

int main(){

    string m, n;
    while(cin >> m >> n){

        vector<int> a(26, 0);
        vector<int> b(26, 0);

        for(int i = 0; i < m.size(); i++){
            a[m[i]-'a']++;
        }

        for(int j = 0; j < n.size(); j++){
            b[n[j]-'a']++;
        }

        for(int k = 0; k < a.size(); k++){
            if(a[k] and b[k]){
                printf("%c", k+97);
            }
        }

        cout << endl;
    

    }

    return 0;
}