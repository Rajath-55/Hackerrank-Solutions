#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v;
  for(int i=0; i<n; i++){
    int temp;
    cin >> temp;
    v.push_back(temp);
  }
  int rem, first, last;
  cin >> rem >> first >> last;
  v.erase(v.begin() + rem - 1);
  v.erase(v.begin() + first - 1, v.begin() + last - 1);

  cout << v.size() << "\n";
  for(int i=0; i < v.size(); i++){
    cout << v[i] << " ";
  }

  return 0;
}
