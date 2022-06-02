#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){

        char target = tolower(s[i]);

        switch (target)
        {
        case 'e':
            cout << "q";
            break;

        case 'd':
            cout << "a";
            break;

        case 'c':
            cout << "z";
            break;

        case 'r':
            cout << "w";
            break;

        case 'f':
            cout << "s";
            break;

        case 'v':
            cout << "x";
            break;

        case 't':
            cout << "e";
            break;

        case 'g':
            cout << "d";
            break;

        case 'b':
            cout << "c";
            break;

        case 'y':
            cout << "r";
            break;

        case 'h':
            cout << "f";
            break;

        case 'n':
            cout << "v";
            break;

        case 'u':
            cout << "t";
            break;

        case 'j':
            cout << "g";
            break;

        case 'm':
            cout << "b";
            break;

        case 'i':
            cout << "y";
            break;

        case 'k':
            cout << "h";
            break;

        case ',':
            cout << "n";
            break;

        case 'o':
            cout << "u";
            break;

        case 'l':
            cout << "j";
            break;

        case '.':
            cout << "m";
            break;

        case 'p':
            cout << "i";
            break;

        case ';':
            cout << "k";
            break;

        case '/':
            cout << ",";
            break;

        case '[':
            cout << "o";
            break;

        case '\'':
            cout << "l";
            break;

        case ']':
            cout << ".";
            break;
        
        default:
            cout << " ";
            break;
        }
    }

    cout << endl;
    

    return 0;
}