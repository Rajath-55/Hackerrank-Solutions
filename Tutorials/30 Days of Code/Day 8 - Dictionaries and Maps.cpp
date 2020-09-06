#include <bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin >> n;
      string name;
      map<string, int> addressbook;
      for(int i=0; i<n; i++){
        cin >> name;
        if(!addressbook[name]){
          cin >> addressbook[name];
        }
      }
      while(cin >> name){
        if(addressbook[name]){
          cout << name << "=" << addressbook[name] << "\n";
        }
        else{
          cout << "Not found" << "\n";
        }
      }
    return 0;
}
