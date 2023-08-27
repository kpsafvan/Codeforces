#include<iostream>
#include<string.h>
using namespace std; 
 int l,k,n,i,current=0,flag=1,a[300];
int checkdone(int s[],int n)
{
	
	for(int g=0;g<n;g++)
	{
		if(s[g]!=0)
		return 1;
	}
	return 0;
}
	 int gright()
	 {  
	 	if(current>(n-2))
	 		{
	 	return current;}
	  	for(i=current+1;i<n;i++)
	   	{
	   		if(a[i]>0)
	   		{
	   			for(k=current;k<i;k++)
	   			cout<<"R";
	   			a[i]=a[i]-1;
	   			cout<<"P";
	   			break;
	   		}
	   	}
	   	return i;
  }
  int gleft()
  {
  	if(current==0)
  	{
	 	return current;
		}
  	for(i=current-1;i>=0;i=i-1)
   	{
   		if(a[i]>0)
   		{		
   			for(k=i;k<current;k++)
   			cout<<"L";
   			a[i]=a[i]-1;
   			cout<<"P";
   			break;
   		}
   	}
   	return i;
  }   
	 
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
   while(flag==1)
   {
   	if(checkdone(a,n))
	current=gright();
	if(checkdone(a,n))
	current=gleft();
	flag=checkdone(a,n);
	}	
}	
