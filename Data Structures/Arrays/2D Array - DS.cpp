#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    int arr[6][6], maxhg = -45;
    for(int i=0; i<6; i++){
      for(int j=0; j<6; j++){
        cin >> arr[i][j];
      }
    }
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        int hg = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1]
               + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
        maxhg = max(maxhg, hg);
      }
    }
    cout << maxhg;

  return 0;
}
