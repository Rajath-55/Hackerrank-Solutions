#include <bits/stdc++.h>
using namespace std;

bool primeornot(int );

int main(){
    int n, i;
    bool f;
    cin >> n;
    vector<int> arr(n);
    for(i = 0; i < n; ++i){
        cin >> arr[i];
        bool f = primeornot(arr[i]);
        if(f){
            cout<<"Prime\n";
        }
        else {
            cout<<"Not prime\n";
        }
    }
    return 0;
}

bool primeornot(int n){
    int i ,sqr;
    if(n == 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
