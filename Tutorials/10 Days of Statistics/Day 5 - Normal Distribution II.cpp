#include <bits/stdc++.h>
using namespace std;

double normal(double mean, double stddev, double x){
    return 0.5*(1 + erf((x-mean)/(stddev*sqrt(2.0))));
}

int main(){
    double mean = 70, stddev = 10;
    printf("%.2f\n%.2f\n%.2f", 100*(1 - normal(mean, stddev, 80)), 100*(1 - normal(mean, stddev, 60)), 100*(normal(mean, stddev, 60)));

  return 0;
}
