#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here 
	// go through it and then if one is solved put the smallest in the val
	//if another comes that is larger, that cant be solved
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {

        int n, x, k;
        cin >> n;
        int a[n],b[n]; 
        for(int j=0;j<n;j++){
            cin>>a[j]; 
        } 
        for(int j=0;j<n;j++){
            cin>>b[j]; 
        }
        
        cout<<count<<"\n";
        
    }
}