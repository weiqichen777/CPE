#include <bits/stdc++.h>
using namespace std;

int main(){

    int len = 1000000;
    vector<int> prime;
    vector<bool> flag(len, true);

    for(int i = 2; i < len; i++){

        if(flag[i] == true){

            prime.push_back(i);
            for(int j = 2*i; j < len; j+=i){
                flag[j] = false;
            }
        }
        
    }

    int n;
    while(cin >> n){

        stringstream ss;
        string s;
        ss << n;
        ss >> s;

        reverse(s.begin(), s.end());
        int rever = stoi(s, nullptr, 10);

        if(find(prime.begin(), prime.end(), n) == prime.end()){
            cout << "not prime" << endl;
        }
        else{

            if(find(prime.begin(), prime.end(), rever) == prime.end()){
                cout << "prime" << endl;
            }
            else{
                cout << "emirp" << endl;
            }
        }
    }



    return 0;
}