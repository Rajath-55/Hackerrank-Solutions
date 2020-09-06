#include <stdio.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

double median(int arr[], int n){
  if (n%2 == 0){
    return ((double)arr[n/2] + (double)arr[(n/2) - 1])/2 ;
  }
  else {
    return (double)arr[n/2] ;
  }
}

int main(){
    int n, k = 1;
    double Quart1, Quart2, Quart3 ;
    scanf("%d", &n);
    int arr[n], arr1[n/2], arr2[n/2];
    for (int i=0; i<n; i++){
      scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    Quart2 = median(arr, n) ;

    for (int i=0; i<(int) n/2; i++){
      arr1[i] = arr[i] ;
    }
    if (n%2 == 0){
      k = 0 ;
    }
    for (int i=0; i<n/2; i++){
      arr2[i] = arr[n/2 + k + i] ;
    }

    Quart1 = median(arr1, n/2) ;
    Quart3 = median(arr2, n/2) ;

    printf("%d\n%d\n%d\n", (int)Quart1, (int)Quart2, (int)Quart3) ;
  return 0;
}
