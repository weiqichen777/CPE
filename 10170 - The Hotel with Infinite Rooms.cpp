#include <bits/stdc++.h>

using namespace std;

int main(){

  int m, n, ans;
  while(cin >> m >> n){

    for(int i = m; ; i++){
        n -= i;
        if(n <= 0){
          ans = i;
          break;
        }
          
    }

    cout << ans << endl;

    
  }

  return 0;
}


