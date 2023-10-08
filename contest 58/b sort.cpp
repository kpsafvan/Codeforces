#include<iostream>
#include<math.h>
#include <vector>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,p;
   	cin>>t;
   	for(i=0;i<t;i++){
   		cin>>n>>p;
   		int a[n],b[n];
   		for(j=0;j<n;j++){
   			cin>>a[j];
   		}
   		for(j=0;j<n;j++){
   			cin>>b[j];
   		}
   		/*for(j=0;j<n;j++){
   			for(int u=0;u<n;u++){
   			cout<<a[u]<<" ";
   			}
			cout<<"\n";

			cout<<"\n";
   			int small=b[j];
   			int loc=j;
   			for(int y=j;y<n;y++){
   				if(small>=b[y]){
   					small=b[y];
   					loc=y;
   				}
   			}
   			int temp = a[loc];
   			a[loc]=a[j];
   			a[j]=temp;
   			int temp1 = b[loc];
   			b[loc]=b[j];
   			b[j]=temp1;
   		}*/
		std::vector<std::pair<int, int>> combined;
		for (j = 0; j < n; j++) {
   		combined.push_back({b[j], a[j]});
		}
		std::sort(combined.begin(), combined.end());
   		for (int i = 0; i < n; i++) {
    	b[i] = combined[i].first;
 	   	a[i] = combined[i].second;
}
   		long long val =p,p_left=n-1;
   		for(j=0;j<n;j++){
   			if(b[j]>=p){
   				val+=p*p_left;
   				p_left=0;
   			}
   			else{
   				if(a[j]<p_left){
   					val+=a[j]*b[j];
   					p_left-=a[j];
   				}
   				else{
   					val+=p_left*b[j];
   					p_left=0;;
   				}
   			}
   			if(p_left==0){break;}
   		}
   		
   	/*	for(j=0;j<n;j++){
   			cout<<a[j]<<" ";
   		}
		cout<<"\n";
   		for(j=0;j<n;j++){
   			cout<<b[j]<<" ";
   		}
   		cout<<"\n";*/
		cout<<val<<"\n";
		
	}
}