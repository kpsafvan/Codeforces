#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int stacka[100000],stackb[100000],stackc[100000],topa=-1,topb=-1,topc=-1;
int popa()
{
	int r=stacka[topa];
	topa--;
	return r;
}
int popb()
{
	int r=stackb[topb];
	topb--;
	return r;
}
int popc()
{
	int r=stackc[topc];
	topc--;
	return r;
}
void pusha(int r)
{
	topa++;
	stacka[topa]=r;
}
void pushb(int r)
{
	topb++;
	stackb[topb]=r;
}
void pushc(int r)
{
	topc++;
	stackc[topc]=r;
}
int main()
{
	
    int i,t,j;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		topa=-1;
		topb=-1;
		topc=-1;
		int n;
		cin>>n;
		int a,b;
		for(j=0;j<n;j++)
		{
			topa++;
			cin>>stacka[topa];
		}
		b=popa();
		while(topa>=-1)
		{
			a=b;
			if(topa>=-1)
			b=popa();
			else
			pushc(b);
			if(a>b)
			{
				if(topb==-1)
				pushc(a);
				else
				{
					pushb(a);
					while(topb>-1)
					{
						int e=popb();
						cout<<e<<"e\n";
						pushc(e);
					}		cout<<"\n";			
				}
			}
			else
			{
				pushb(a);
			}	
		}
		for(j=0;j<=topc;j++)
		{
			cout<<stackc[j]<<" ";
		}	
		cout<<"\n";
		/*while(topc!=-1)
		{
			cout<<popc()<<" ";
		}
		cout<<"\n";
	*/
	}	
	return 0;
}