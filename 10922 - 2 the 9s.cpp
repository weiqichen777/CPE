#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    while(cin >> s and s[0]-'0'!=0){

        int sum = 0;

        for(int i = 0; i < s.size(); i++){
            sum += s[i]-'0';
        }

        if(sum % 9 != 0){
            cout << "not a multiple of 9" << endl;
        }
        else{

            int count = 1;
            while(sum != 9){

                stringstream ss;
                ss << sum;
                ss >> s;

                sum = 0;

                for(int i = 0; i < s.size(); i++){
                    sum += s[i]-'0';
                }

                count++;
            
            }

            cout << count << endl;
        }
        
    }

    return 0;
}