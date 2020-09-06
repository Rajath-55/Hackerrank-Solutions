#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(int arr[], int n, int* swaps){
    int count = 0;
    for (int i = 0; i < n-1; i++)
    for (int j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1]){
          swap(&arr[j], &arr[j+1]);
          count++;
        }
    *swaps = count;
}

int main() {
      int n, swaps;
      cin >> n;
      int arr[n];
      for(int i=0; i<n; i++){
        cin >> arr[i];
      }
      bubblesort(arr, n, &swaps);
      cout << "Array is sorted in " << swaps << " swaps.\n" << "First Element: " << arr[0] << "\n" << "Last Element: " << arr[n-1] << "\n";

    return 0;
}
