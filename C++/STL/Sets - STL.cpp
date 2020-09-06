#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  set<int> s;
  while(q--){
    int y, x;
    cin >> y >> x;
    if(y == 1){
      s.insert(x);
    }
    if(y == 2){
      s.erase(x);
    }
    if(y == 3){
      set<int>::iterator itr = s.find(x);
      if(itr == s.end()){
        cout << "No\n";
      }
      else{
        cout << "Yes\n";
      }
    }
    continue;
  }

  return 0;
}
