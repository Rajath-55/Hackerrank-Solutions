#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k){
    int j, max;
    for (int i = 0; i <= n - k; i++){
        max = arr[i];
        for (j = 1; j < k; j++){
            if (arr[i + j] > max){
              max = arr[i + j];
            }
        }
        cout << max << " ";
    }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }
    printKMax(arr, n, k);
    cout << "\n";
  }

  return 0;
}
