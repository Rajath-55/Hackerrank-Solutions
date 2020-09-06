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
    double pr = 0.12, ans1 = 0.0, ans2 = 0.0;
    for(int i=0; i<=2; i++){
      ans1 += (double)(nCr(10, i) * pow(pr, i) * pow(1-pr, 10-i));
    }
    for(int i=2; i<=10; i++){
      ans2 += (double)(nCr(10, i) * pow(pr, i) * pow(1-pr, 10-i));
    }

    printf("%.3f\n", ans1);
    printf("%.3f", ans2);

  return 0;
}
