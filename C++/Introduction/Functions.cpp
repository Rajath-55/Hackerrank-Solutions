#include <bits/stdc++.h>
using namespace std;

int max(int arr[]){
  int m = arr[0];
  for(int i=0; i<4; i++){
    arr[i] > m ? m = arr[i] : m = m;
  }
  return m;
}

int main(){
  int arr[4];
  for(int i=0; i<4; i++){
    cin >> arr[i];
  }
  cout << max(arr);
  return 0;
}
