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
   		int n,m;
   		cin>>n>>m;
   		int a[m];
   		bool asc = true;
   		for(int j=0;j<m;j++){
   			cin>>a[j];
   		}
   		for(int j=0;j<m;j++){
   			if(j!=0){
   				if((a[j] - 1) != a[j - 1]){
   					asc = false;
   					break;
   				}
   			}
   		}
   		int count = 0;
   		//three cases, if there is more than one cycle, answer is one done
   		//length is one
   		//length more than one
   		//sub cases starting with one and starting with n

   		if(asc == false){
   			cout<<"1"<<"\n";
   		}
   		else{
	   		if(m == 1){
				count = n - a[0] + 1;
   			}
   			else if(m > 1){
   				count = n - m + 1;
   				if(a[0] > 1){
   					count -= a[0] - 1;
   				}
   			}
   			cout<<count<<"\n";
   		}
   		
   	}
}