#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
  if (n<=20 && (a,b,c)<=100){
    int sum = 0;
    if (n==1){  sum = a; }
    if (n==2){  sum = b; }
    if (n==3){  sum = c; }
    if ((n-3)>=1){
      a = find_nth_term(1, a, b, c);
      b = find_nth_term(2, a, b, c);
      c = find_nth_term(3, a, b, c);
      sum = find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c);
    }
    return sum ;
  }
  return 0;
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans);
    return 0;
}
