#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  for(int i=a; i<=b; i++){
    if (i > 9){
      i%2 == 0 ? cout << "even\n" : cout << "odd\n";
      continue;
    }
    else{
      if(i == 1){
        cout << "one\n";
        continue;
      }
      else if(i == 2){
        cout << "two\n";
        continue;
      }
      else if(i == 3){
        cout << "three\n";
        continue;
      }
      else if(i == 4){
        cout << "four\n";
        continue;
      }
      else if(i == 5){
        cout << "five\n";
        continue;
      }
      else if(i == 6){
        cout << "six\n";
        continue;
      }
      else if(i == 7){
        cout << "seven\n";
        continue;
      }
      else if(i == 8){
        cout << "eight\n";
        continue;
      }
      else {
        cout << "nine\n";
        continue;
      }
  }
  }

  return 0;
}
