#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
      cin >> t;
      while(t--){
        string s;
        cin >> s;
        int len = s.length();
        if(len%2 == 0){
          for(int i=0; i<len-1; i+=2){
            cout << s[i];
          }
          cout << " ";
          for(int i=1; i<len; i+=2){
            cout << s[i];
          }
        }
        else {
          for(int i=0; i<len; i+=2){
            cout << s[i];
          }
          cout << " ";
          for(int i=1; i<len-1; i+=2){
            cout << s[i];
          }
        }
        cout << "\n";
      }

    return 0;
}
