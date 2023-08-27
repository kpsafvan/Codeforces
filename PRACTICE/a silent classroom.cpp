#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k;
   	cin>>t;
   	string a,b;
	for(i =0;i<t;i++)
	{
		cin>>a;
		b[i]=a[0];		
	}
	int count=0;
	for(i =0;i<t;i++)
	{
		int num=0;
		if(b[i]=='0')
		continue;
		for(k=0;k<t;k++)
			{
				if(b[i]==b[k])
				{
					num++;
				//	if(i!=k)
					//b[k]='0';
				}			
			}
		//b[i]=='0';	
		//cout<<b[0]<<b[1]<<b[2]<<b[3]<<"\n";
	/*	if(num>3&&num%2==0)
		count+=((num/2)*((num/2)-1));
		else if(num>3&&num%2==1)
		count+=(((num/2)*((num/2)-1)) + ((num-num/2)*((num-num/2)-1)))/2;
		else
		count+=((num*(num-1))/2)/2;
		//count+=((num*(num-1))/2);	*/
		count+=((num/2)/2)+((num/2)/2);
	}
	cout<<count;

}	