#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
	int j,i;
	int n,t;
	cin>>n;
	char a[5];
	for(j=0;j<n;j++)
	{
		for(i=0;i<5;i++)
		cin>>a[i];
		cin>>t;
		int hh=(a[0]-48)*10+a[1]-48;
		int mm =(a[3]-48)*10+a[4]-48;
		
		int hh1=hh+(t/60),mm1=mm+((t%60));
		if(mm1>59)
		hh1++;
		mm1=mm1%60;
		hh1=hh1%24;
		int num=0;
		while((hh1!=hh)||(mm1!=mm))
		{
			//cout<<hh1<<" "<<mm1<<"\n";
			if((mm1%10==hh1/10)&&(mm1/10==hh1%10))
			{
				num++;
				//cout<<"p";
			}
			hh1=hh1+(t/60);
			mm1=mm1+((t%60));
			if(mm1>59)
			hh1++;
			mm1=mm1%60;
			hh1=hh1%24;
			
			
		}
		if((mm1%10==hh1/10)&&(mm1/10==hh1%10))
			{
				num++;
				//cout<<"p";
			}
		cout<<num<<"\n";
		
		
		
		
		
		
		/*cout<<hh<<" "<<mm<<"\n";
		cout<<hh1<<" "<<mm1<<"\n";*/
		
	}
	
}	