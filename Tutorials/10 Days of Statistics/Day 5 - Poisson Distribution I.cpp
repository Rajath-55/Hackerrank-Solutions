#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int recfact(long start, long n) {
  long i;
  if (n <= 16) {
    int r(start);
    for (i = start + 1; i < start + n; i++)
      r *= i;
    return r;
  }
  i = n / 2;
  return recfact(start, i) * recfact(start + i, n - i);
}
int factorial(int num) { return recfact(1, num); }

int main() {
  float lambda = 0.0;
  int k = 0;
  cin >> lambda >> k;
  cout << fixed << setprecision(3)
       << pow(lambda, k) * exp(-lambda) / factorial(k);

  return 0;
}
