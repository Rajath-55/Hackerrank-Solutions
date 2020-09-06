#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string words[n];
    for(int i=0; i<n; i++){
      cin >> words[i];
    }
    int q;
    cin >> q;
    while(q--){
      string temp;
      cin >> temp;
      int ct = 0;
      for(int i=0; i<n; i++){
        if(words[i] == temp){
          ct++ ;
        }
        else{
          continue ;
        }
      }
      cout << ct << "\n";
    }

  return 0;
}
