#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n<2) return 1;
    return n*factorial(n-1);
}

double nCr(int n, int r){
      return factorial(n)/(factorial(r) * factorial(n-r));
}

int main(){
    double prboy = 1.09/2.09, ans = 0.0; double prgirl = 1-prboy;
    for(int i=3; i<=6; i++){
      ans += (double)(nCr(6, i) * pow(prboy, i) * pow(prgirl, 6-i));
    }
    printf("%.3f", ans);

  return 0;
}
