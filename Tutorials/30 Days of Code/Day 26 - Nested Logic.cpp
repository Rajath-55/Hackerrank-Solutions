#include <bits/stdc++.h>
using namespace std;

int main(){
  int d1, m1, y1, d2, m2, y2;
  cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
  int fine;
  if (((d1 <= d2) && (m1 <= m2) && (y1 == y2)) || (y1 < y2)){
    fine = 0;
  }
  else if ((d1 > d2) && (m1 == m2) && (y1 == y2)){
    fine = 15 * (d1 - d2);
  }
  else if ((m1 > m2) && (y1 == y2)){
    fine = 500 * (m1 - m2);
  }
  else {
    fine = 10000;
  }
  cout << fine << "\n";

  return 0;
}
