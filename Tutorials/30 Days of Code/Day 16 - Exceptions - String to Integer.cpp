#include <bits/stdc++.h>
using namespace std;

int main() {
      string str;
      try{
        cin >> str;
        cout << stoi(str);
      }
      catch(exception){
        cout << "Bad String";
      }

    return 0;
}
