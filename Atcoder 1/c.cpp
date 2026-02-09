#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::unordered_set<int> h;
 	//start from the largest two sum
 	//the number will be equal or smaller
 	int n;
 	cin>>n;
 	int a[n];
 	
 	for(int i =0;i<n;i++){
 		cin>>a[i];
 	}
 	sort(a,a+n);
 	
 	if(n == 1){
 		cout<<a[0];
 	}
 	else{
 		//Take the sum of the largest and smallert only
 		int max = a[0] + a[n-1];
 		// cout<<max;
 		//right pointer ignore the current number
 		for(int i=1;i<=max;i++){
 			int valid = 1,rp =n-1,lp=0;
 			//choose right pointer(go left till it is not equal to i)
 			while(rp>=0 && a[rp] == i){
 				rp--;
 			}
 			//all are equal
 			if(rp==-1){
 				cout<<i<<" ";
 				continue;
 			}
 			else{
 				//middle baakki varal case to be checked
 				while(rp>lp){
 					
 					if(a[rp] + a[lp] == i){
 						rp--;
 						lp++;
 						// cout<<"a";
 						continue;
 					}
 					else{
 						// cout<<i<<"s";
 						valid = 0;
 						break;
 					}
 				}
 			}
 			if(valid == 1 && rp !=lp){
 				cout<<i<<" ";
 			}
 			
 		}
 	}
 	
 	// for(int i =0;i<n;i++){
 		// cout<<a[i]<<" ";
 	// }
}