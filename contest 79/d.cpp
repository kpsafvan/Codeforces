#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long i,t;
   	cin>>t; 
   	for(i=0;i<t;i++)
   	{
   		long n,l,r;
   		cin>>n>>l>>r; 
   		long a[n];
   		long count =0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   		}
   		sort(a,a+n);
   		
   		long min = 0,val = 0,countL = 0,countR =0,countE =0;
   		//initial case, when pos is minimum of interavel
   		for(int j=0;j<n;j++){
   			if(a[j]<l){
   				val += l-a[j];
   				countL++;
   			}
   			else if(a[j] > l){
   				val += a[j]-l;
   				countR++;
   			}
   			else if(a[j] == l){
   				countE++;
   			}
   		}
   		min = val;
   		long prev = val;
   		int num =0;
   		//Now calculate the rest of it
   		for(int j=l+1;j<=r;j++){
   			val = prev;
   			// long diff = j - l;
   			long long count = 0;
   			for(int k = countL -1;k<n;k++){
   				if(a[k] == j){
   					count++;
   				}
   			}
   			
   			val += countL;
   			val += countE;
   			val -= countR;
   			// val += count;
   			
   			countL += countE;
   			countE = count;
   			countR -= count;
   			if(val < min){
   				min = val;
   				num = 0;
   			}
   			// if(val > 2 * min){
   				// num++;
   				// if(num > 10000000)
   					// break;
   			// }
   			prev = val;
   		}
   		
		cout<<min<<"\n";
   	}
}