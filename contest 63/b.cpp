#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		 int k;
   		 cin>>n;
   		 int c[n];
   		 for(j=0;j<n;j++)
   		 {
   		 	cin>>c[j];
   		 }
   		 
   		 int count=0,count_mul=0;
   		 for(j=0;j<n;j++)
   		 {
   		 	if(c[j]==0)
   		 	{
   		 		continue;
   		 	}
   		 	int unique=0;
   		 	for(int y=0;y<n;y++)
   		 	{
	   		 	if(y==j)
	   		 	{
	   		 		continue;
	   		 	}
	   		 	if(c[y]==c[j])
	   		 	{
	   		 		unique=1;
	   		 		for(int z=0;z<n;z++)
	   		 		{
	   		 			if(c[z]==c[y]&&z!=y)
	   		 			{
	   		 				c[z]=0;	
	   		 			}
	   		 			c[y]=0;
	   		 		}
	   		 		count_mul++;
	   		 		break;
	   		 	}
   		 	}
   		 	if(unique==0)
   		 	{
   		 		count++;
   		 	}
   		 }
   		 
   		 int score = (count_mul) + ((count+1)/2)*2;
   		 cout<<count_mul<<"  "<<"\n";
   		 cout<<count<<"  "<<"\n";
   		 cout<<score<<"\n";
   	}
}