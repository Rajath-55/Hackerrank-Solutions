#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
  int num;
  if (a>b && a>c && a>d){
  num = a;
  }
  if (b>a && b>c && b>d){
  num = b;
  }
  if (c>a && c>b && c>d){
  num = c;
  }
  if (d>a && d>b && d>c){
  num = d;
  }
  return num;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
