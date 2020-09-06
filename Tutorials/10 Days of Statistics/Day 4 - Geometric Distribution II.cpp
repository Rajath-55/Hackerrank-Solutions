#include <bits/stdc++.h>
using namespace std;


int main(){
    double ans = 0.333333;
    for(int i=1; i<=4; i++){
        ans += pow((double)(0.666666), i)*(double)(0.333333);
    }
    printf("%.3f", ans);

  return 0;
}
