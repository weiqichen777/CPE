#include <bits/stdc++.h>
using namespace std;

int main(){

    long long m, n;
    while(cin >> m >> n and m and n){

        vector<long long> v;
        v.push_back(m);
        
        long long rem = 0;
        while(rem == 0 and m > 0){

            rem = m%n;
            m /= n;
            v.push_back(m);
        }

        
        if(v.back() != 0){
            cout << "Boring!";
        }
        else{

            for(int i = 0; i < v.size()-1; i++){
                cout << v[i] << " ";
            }
        }

        
        

        cout << endl;

    }

    return 0;
}