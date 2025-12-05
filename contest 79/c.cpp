#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,t;
   	cin>>t; 
   	for(i=0;i<t;i++)
   	{
   		int n,k,q;
   		cin>>n>>k>>q; 
   		int a[q][3];
   		int count =0;
   		for(int j=0;j<q;j++){
   			cin>>a[j][0]>>a[j][1]>>a[j][2];
   			
   		}
		int arr[n+1];
		for(int j=0;j<n;j++){
			arr[j] =0;
		}
		bool flag = false;
   		for(int j=0;j<q;j++){
   			if(a[j][0] == 1){
   				for(int s=a[j][1];s<=a[j][2];s++){
	   				arr[s] = k;
	   			}
   			}
   			else if(a[j][0] == 2){
   				for(int s=a[j][1];s<=a[j][2];s++){
   					if(s - a[j][1] < k)
	   					arr[s] = s - a[j][1];
	   				else
	   					arr[s] = (s - a[j][1]) + 1;
	   			}
   			}
	   			
   			
   		}
   		
   		for(int j=1;j<=n;j++){
			cout<<arr[j]<<" ";
		}
		cout<<"\n";
   	}
}