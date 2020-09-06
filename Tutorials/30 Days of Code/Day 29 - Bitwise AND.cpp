#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
      cin >> t;
      while(t--){
        int k, n, answer = 0;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
          arr[i] = i+1;
        }
        for(int b=0; b<n; b++){
          for(int a=0; a<b; a++){
            if((arr[a]&arr[b]) > answer && (arr[a]&arr[b]) < k){
              answer = arr[a]&arr[b];
            }
          }
        }
        cout << answer << "\n";
      }
    return 0;
}
