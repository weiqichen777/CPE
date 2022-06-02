#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){

        int dec;
        cin >> dec;
        string dec2 = to_string(dec);
        
        int bin = 0;
        int rem;
        while(dec > 0){
            rem = dec % 2;
            if(rem == 1)
                bin++;
            dec /= 2;
        }

        int hex = 0;
        for(int i = 0; i < dec2.size(); i++){

            int target = dec2[i] - '0';
            while(target > 0){
                rem = target % 2;
                if(rem == 1)
                    hex++;
                target /= 2;
            }
        }


        cout << bin << " " << hex << endl;



    }

    return 0;
}