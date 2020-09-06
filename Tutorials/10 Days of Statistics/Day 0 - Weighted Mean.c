#include <stdio.h>

int main(){
    int n, count = 0, sum = 0;
    double res ;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (int i=0; i<n; i++){
      scanf("%d", &arr1[i]);
    }
    for (int i=0; i<n; i++){
      scanf("%d", &arr2[i]);
      count += arr2[i];
    }
    for (int i=0; i<n; i++){
      sum += arr1[i] * arr2[i] ;
    }
    res = (double)sum/count ;
    printf("%.1f\n", res);

  return 0;
}
