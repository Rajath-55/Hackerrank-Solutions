#include <bits/stdc++.h>
using namespace std;

void RankGenerator(double arr[], int n){
    float R[n] = {0};
    for(int i=0; i<n; i++){
      int r=1, s=1;
      for(int j=0; j<n; j++){
        if (j != i && (arr[j] < arr[i])){
          r++;
        }
        if (j != i && (arr[j] == arr[i])){
          s++;
        }
      }
      R[i] = r + (float)(s-1)/(float)2 ;
    }
    for(int i=0; i<n; i++){
      arr[i] = R[i];
    }
}

int main(){
    int n;
    cin >> n;
    double arr1[n], arr2[n];
    for(int i=0; i<n; i++){
      cin >> arr1[i];
    }
    for(int i=0; i<n; i++){
      cin >> arr2[i];
    }
    RankGenerator(arr1, n);
    RankGenerator(arr2, n);
    double di = 0;
    for(int i=0; i<n; i++){
      di += pow(abs(arr1[i] - arr2[i]), 2);
    }
    di *= 6;

    cout << 1 - (double)(di/(n*(n*n-1)));

  return 0;
}
