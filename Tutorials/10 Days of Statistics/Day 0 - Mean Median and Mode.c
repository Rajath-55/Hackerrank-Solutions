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

int mostFrequent(int arr[], int n){
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }
    return res;
}

int main(){
    int n, count = 0, mode = 0;
    double median, mean = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
      scanf("%d", &arr[i]);
      count += arr[i];
    }
    bubbleSort(arr, n);
    if (n%2 == 0){
      median = ((double)arr[n/2] + (double)arr[(n/2) - 1])/2 ;
    }
    else {
      median = (double)arr[(n/2) - 1] ;
    }
    mean = (double)count/n ;
    mode = mostFrequent(arr, n);
    printf("%.1f\n%.1f\n%d\n", mean, median, mode);
  return 0;
}
