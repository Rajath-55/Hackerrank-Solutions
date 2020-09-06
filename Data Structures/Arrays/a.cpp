#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n], maxans = 0;
    for(int i=0; i<n; i++){
      arr[i] = 0;
    }
    while(m--){
      int a, b, k;
      cin >> a >> b >> k;
      for(int i=a-1; i<b; i++){
        arr[i] += k;
        maxans = max(arr[i], maxans);
      }
    }
    cout << maxans;

  return 0;
}
