#include <bits/stdc++.h>
using namespace std;

int main() {
      int tip, tax, check; double meal;
      cin >> meal >> tip >> tax;
      double ans = (meal + (meal*(tip+tax)/100));
      if ((ans - floor(ans)) >= .5){
        cout << int(ans) + 1;
      }
      else {
        cout << int(ans);
      }

    return 0;
}
