#include <iostream>
#include <cmath>

using namespace std;

 int main() {
  double mean = 100*2.4, stddev = sqrt(100)*2.0, x = 250;
  printf("%0.4f", 0.5*(1 + erf((x-mean)/(stddev*sqrt(2.0)))));

return 0;
}
