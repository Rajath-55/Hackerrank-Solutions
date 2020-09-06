#include <bits/stdc++.h>
using namespace std;

double normal(double mean, double stddev, double x){
    return 0.5*(1 + erf((x-mean)/(stddev*sqrt(2.0))));
}

int main(){
    double mean = 20, stddev = 2;
    printf("%.3f\n%.3f", normal(mean, stddev, 19.5), normal(mean, stddev, 22) - normal(mean, stddev, 20));

  return 0;
}
