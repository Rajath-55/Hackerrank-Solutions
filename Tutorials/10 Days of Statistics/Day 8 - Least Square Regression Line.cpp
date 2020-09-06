#include <bits/stdc++.h>
using namespace std;

int main(){
    int arrx[] = {95, 85, 80, 70, 60};
    int arry[] = {85, 95, 70, 65, 70};
    double a, b, xmean = 0, ymean = 0, sumx = 0, sumy = 0, sumxy = 0, sumxsq = 0;
    for(int i=0; i<5; i++){
      sumx   += arrx[i];
      sumy   += arry[i];
      sumxy  += (arrx[i] * arry[i]);
      sumxsq += (arrx[i] * arrx[i]);
    }
    b = ((5*sumxy) - (sumx*sumy))/((5*sumxsq) - (sumx*sumx));
    a = (sumy/5) -b*(sumx/5);
    printf("%.3f", a + b*(80));

  return 0;
}
