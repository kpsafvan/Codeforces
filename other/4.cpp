#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int b,g,x,y,n;
        
        cin>>b>>g>>x>>y>>n;
        //x+y<n no
        if(x+y < n){
            cout<<"-1\n";
        }
        else{
            //divide both and find the one that has lesser roooms
            //can the other fit in the space left?
            int bRoom = b/x, gRoom = g/y;
            if(bRoom > gRoom){
                if(gRoom * (n - y) >= b){
                    cout<<gRoom<<"\n";
                }
                else{
                    cout<<"-1\n";
                }
            }
            else{
                if(bRoom * (n - x) >= g){
                    cout<<bRoom<<"\n";
                }
                else{
                    cout<<"-1\n";
                }
            }
        }
        
    }
}
