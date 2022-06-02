#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    while(cin >> n){
        
        vector<int> v(n);
        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            v[i] = temp;
        }
        
        bool flag = true;
        vector<int> s;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                
                temp = v[i] + v[j];
                
                if(find(s.begin(), s.end(), temp) == s.end()){
                    s.push_back(temp);
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag)
            cout << "It is a B2-Sequence." << endl;
        else
            cout << "It is not a B2-Sequence." << endl;
        
        getchar();
    }

    return 0;
}


