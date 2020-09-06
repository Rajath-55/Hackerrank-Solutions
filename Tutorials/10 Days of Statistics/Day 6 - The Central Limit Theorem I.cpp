#include <iostream>
#include <cmath>

using namespace std;

 int main() {
    double mean = 49*205, stddev = sqrt(49)*15, x = 9800;
    printf("%0.4f", 0.5*(1 + erf((x-mean)/(stddev*sqrt(2.0)))));

return 0;
}
