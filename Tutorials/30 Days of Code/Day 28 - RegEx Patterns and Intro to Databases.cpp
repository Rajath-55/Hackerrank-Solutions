#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<string> emails(t);
    vector<string> names(t);
    vector<string> gmailUsers;

    for(int i = 0; i < t; i++){
        cin >> names[i] >> emails[i];
        if(regex_match(emails[i], regex("(.*)@gmail.com"))){
          gmailUsers.push_back(names[i]);
        }
    }

    sort(gmailUsers.begin(), gmailUsers.end());

    for(int i=0; i < gmailUsers.size(); i++){
        cout << gmailUsers[i] << "\n";
    }

    return 0;
}
