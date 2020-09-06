#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

    int n;
    cin >> n;
    double av1=0, av2=0, stddev1=0, stddev2=0, pearson=0, arr1[n], arr2[n];

    for (int i=0; i<n; i++){
      cin >> arr1[i];
      av1 += arr1[i] ;
    }
    av1 = av1 / n ;
    for (int i=0; i<n; i++){
      cin >> arr2[i];
      av2 += arr2[i] ;
    }
    av2 = av2 / n ;

    for (int i=0; i<n; i++){
      stddev1 += (arr1[i] - av1) * (arr1[i] - av1) ;
    }
    stddev1 = sqrt(stddev1/n) ;
    for (int i=0; i<n; i++){
      stddev2 += (arr2[i] - av2) * (arr2[i] - av2) ;
    }
    stddev2 = sqrt(stddev2/n) ;

    for (int i=0; i<n; i++){
      pearson += (arr1[i] - av1)*(arr2[i] - av2) ;
    }
    pearson = pearson/(n * stddev1 * stddev2) ;

    printf("%.3f", pearson) ;

return 0;
}
