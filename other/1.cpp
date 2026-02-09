#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    // the condition just means the array has an element that is less by one in the right side of the number
    // count the ones, go though the array and for each element 
    // start from the first one and then go from there

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {

        int n, x, k;
        cin >> n;
        int a[n];
        int index = -1;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(index == -1 && a[j] == 1){
                index = j;
                
            }
        }
        int val = 1,count=0;
        if(index !=-1){
            count++;
            for(int j=index;j<n;j++){
                int flag = 0;
                for(int k=j+1;k<n;k++){
                    if(a[k] == val+1){  
                        if(flag ==0){
                        	j = k - 1;
                        }
                        flag = 1;
                        count++;
                    }
                } 
                if(flag ==0){
                    break;
                }
                val++;
            }
            for(int j =index + 1;j<n;j++){
            	if(a[j] == 1){
            		count++;
            	}
            }
        }
        cout<<count<<"\n";
        
    }
}