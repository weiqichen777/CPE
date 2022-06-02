#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int n, p;
        cin >> n >> p;
        vector<bool> d(n+1, false);
        
        int h;
        while(p--){
            
            cin >> h;

            for(int i = h; i < n+1; i+=h){
                
                d[i] = true;
                
            }
        }

        for(int i = 6; i < n+1; i+=7){
            d[i] = false;
            d[i+1] = false;
        }

        
        int count = 0;
        for(int i = 1; i < n+1; i++){
            if(d[i])
                count++;
        }

        cout << count << endl;
    }

    return 0;
}