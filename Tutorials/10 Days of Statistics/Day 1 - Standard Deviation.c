#include <stdio.h>

int main(){
    int n, count = 0;
    double mean, stddev, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
      scanf("%d", &arr[i]);
      count += arr[i];
    }
    mean = (double) count /n ;
    for (int i=0; i<n; i++){
      sum += pow(arr[i] - mean, 2);
    }
    stddev = sqrt(sum/n);
    printf("%.1f\n", stddev) ;

  return 0;
}
