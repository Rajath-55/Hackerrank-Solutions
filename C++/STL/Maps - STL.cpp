#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  map<string,int> m;
  while(q--){
    int type, y = 0;
    string x;
    cin >> type;
    if(type == 1){
      cin >> x >> y;
      map<string,int>::iterator itr=m.find(x);
      if(itr == m.end()){
        m.insert(make_pair(x, y));
      }
      else{
        m[x] += y;
      }
    }
    else{
      cin >> x;
      if(type == 2){
        m.erase(x);
      }
      else{
        cout << m[x] << "\n";
      }
    }
    continue;
  }

  return 0;
}
