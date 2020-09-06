#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a; double b; char str[100];
    scanf("%d\n%lf\n%[^\n]%*c", &a, &b, &str);
    printf("%d\n%.1f\n", a + i, b + d);
    cout << s << str;
    return 0;
}
