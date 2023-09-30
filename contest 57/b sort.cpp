#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	//Approach 2 automation
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,m,k;
   	cin>>t;
   	for(i=0;i<t;i++){
   		cin>>n>>m>>k;
   		int a[n],b[m];
   		for(j=0;j<n;j++){
   			cin>>a[j];
   		}
   		for(j=0;j<m;j++){
   			cin>>b[j];
   		}
   		int swap=min(4,(int)k);
   		if(k%2!=0)
   		{
   			swap=min(5,(int)k);
   		}
   		for(j=0;j<swap;j++){
   			sort(a,a+n);
   			sort(b,b+m);
   			if(a[0]<b[m-1]){
	   			int temp = a[0];
	   			a[0]=b[m-1];
	   			b[m-1]=temp;
			}   			
			j++;
   			/*for(int y=0;y<n;y++){
   			cout<<a[y]<<" ";
	   		}
	   		cout<<"\n";
	   		for(int y=0;y<m;y++){
	   			cout<<b[y]<<" ";
	   		}
	   		cout<<"\n";*/
   			if(j<swap){
   				sort(a,a+n);
	   			sort(b,b+m);
	   			if(b[0]<a[n-1]){
		   			int temp = a[n-1];
		   			a[n-1]=b[0];
		   			b[0]=temp;
	   			}
	   			/*for(int y=0;y<n;y++){
	   			cout<<a[y]<<" ";
		   		}
		   		cout<<"\n";
		   		for(int y=0;y<m;y++){
		   			cout<<b[y]<<" ";
		   		}
		   		cout<<"\n";*/
   			}
   		}
   		long long sum=0;
		for(int y=0;y<n;y++){
			sum+=a[y];
		}
			cout<<sum<<"\n";
		
   	}
}