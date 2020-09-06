#include <bits/stdc++.h>
using namespace std;

int solve(int twodimens[6][6]){
    int answer = -1000000, sum;
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        sum = twodimens[i][j] + twodimens[i][j+1] + twodimens[i][j+2] + twodimens[i+1][j+1] + twodimens[i+2][j] + twodimens[i+2][j+1] + twodimens[i+2][j+2];
        answer = max(sum, answer);
      }
    }
  return answer;
}

int main() {
      int twodimens[6][6];
      for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
          cin >> twodimens[i][j];
        }
      }

      cout << solve(twodimens);
    return 0;
}
