#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    while(cin >> s){

        int base = 1;
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            char target = s[i];
            if(isdigit(target)){
                sum += target - '0';
            }
            else if(isupper(target)){
                sum += target - 'A' + 10;
            }
            else if(islower(target)){
                sum += target - 'a' + 36;
            }
        }

        base = max(base, sum);

        for(; base <= 62; base++){

            if(sum % base == 0){
                cout << base+1 << endl;
                break;
            }

            if(base == 62){
                cout << "such number is impossible!" << endl;
                break;
            }
                
        }
    }

    return 0;
}