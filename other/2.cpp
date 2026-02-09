#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    // check both options
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {

        int n,x,k;
        cin >> n >> x >> k;
        int count = x%k;
        
        // cout << count<<"\n";
        int num = x/k;
        // cout << num<<"\n";
        if(k*(num+1)<=n){
            if( abs(x - k*(num+1)) < count){
                count = abs(x -(k*(num+1)));
            }
        }
        cout << count<<"\n";
    }
}