#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
 
int main() {
    
    int c;
    cin >> c;
    while(c--){
        
        int n;
        double p, q, ans;
        int i;
        
        cin >> n >> p >> i;
        
        q = 1 - p;
        ans = pow(q, i-1) * p / (1 - pow(q, n));
        
        cout << setprecision(4) << ans << endl;
        
    }
    
    return 0;
}




