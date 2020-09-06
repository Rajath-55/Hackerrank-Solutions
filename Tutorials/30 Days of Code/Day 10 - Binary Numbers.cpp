#include <bits/stdc++.h>
using namespace std;

int main() {
      int n, count = 0, big = 0;
      cin >> n;
      while(n>0){
        if(n%2 == 1){
          count ++;
          big = max(big, count);
        }
        else {
          count = 0;
        }
        n /= 2;
      }
      cout << big;

    return 0;
}
