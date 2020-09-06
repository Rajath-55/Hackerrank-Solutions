#include <bits/stdc++.h>
using namespace std;

double median(int arr[], int n){
  if (n%2 == 0){
    return ((double)arr[n/2] + (double)arr[(n/2) - 1])/2 ;
  }
  else {
    return (double)arr[n/2] ;
  }
}

int main(){
    int n, l=1, k=0;
    cin >> n;
    int arr1[n], arr2[n], count = 0;
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++){
        cin >> arr2[i];
        count += arr2[i];
    }
    int array[count], array1[count/2], array2[count/2];
    for(int i=0; i<n; i++){
        for(int j=0; j<arr2[i]; j++){
            array[k] = arr1[i];
            k++;
        }
    }
    sort(array, array + count);
    if(count%2 != 0){
      array[(int)(count/2) + 1] = array[count -1] + 1;
      count--;
      sort(array, array + count);
      for(int i=0; i<(count/2); i++){
        array1[i] = array[i];
        array2[i] = array[(count/2) + i];
      }
    }
    else{
      for(int i=0; i<(count/2); i++){
        array1[i] = array[i];
        array2[i] = array[(count/2) + i];
      }
    }
    printf("%.1f\n", median(array2, count/2) - median(array1, count/2));

  return 0;
}
