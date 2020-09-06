#include <bits/stdc++.h>
using namespace std;

int main(){
  string str1, str2;
  cin >> str1 >> str2;
  cout << str1.size() << " " << str2.size() << "\n" << str1 << str2 << "\n";
  char str3[str1.size()], str4[str2.size()];
  str3[0] = str2[0];
  str4[0] = str1[0];

  for(int i=1; i< str1.size(); i++){
    str3[i] = str1[i];
  }
  for(int i=1; i< str2.size(); i++){
    str4[i] = str2[i];
  }

  for(int i=0; i< str1.size(); i++){
    cout << str3[i] ;
  }
  cout << " ";
  for(int i=0; i< str2.size(); i++){
    cout << str4[i] ;
  }

  return 0;
}
