#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mean = 500, stddev = 8, z=1.96 ;
    printf("%.2f\n%.2f\n", mean - (stddev*z), mean + (stddev*z)) ;
    return 0;
}
