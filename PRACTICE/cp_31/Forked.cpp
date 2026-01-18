#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int t;
   	cin>>t;
   	int a,b,xk,yk,xq,yq;
   	//a,b / a,-b / -a,-b / -a,b
   	//a,b / a,-b / -a,-b / -a,b
	for(int i =0;i<t;i++)
	{
			cin>>a>>b;
			cin>>xk>>yk;	
			cin>>xq>>yq;	
			long k[8][2],q[8][2];
			k[0][0] = xk + a; k[0][1] = yk + b;
			k[1][0] = xk + a; k[1][1] = yk - b;
			k[2][0] = xk - a; k[2][1] = yk - b;
			k[3][0] = xk - a; k[3][1] = yk + b;
			
			k[4][0] = xk + b; k[4][1] = yk + a;
			k[5][0] = xk + b; k[5][1] = yk - a;
			k[6][0] = xk - b; k[6][1] = yk - a;
			k[7][0] = xk - b; k[7][1] = yk + a;
			
			q[0][0] = xq + a; q[0][1] = yq + b;
			q[1][0] = xq + a; q[1][1] = yq - b;
			q[2][0] = xq - a; q[2][1] = yq - b;
			q[3][0] = xq - a; q[3][1] = yq + b;
		
			q[4][0] = xq + b; q[4][1] = yq + a;
			q[5][0] = xq + b; q[5][1] = yq - a;
			q[6][0] = xq - b; q[6][1] = yq - a;
			q[7][0] = xq - b; q[7][1] = yq + a;
			
			long count =0;
			// for(int j=0;j<8;j++){
				// cout<<k[j][0]<<" "<<k[j][1];
			// cout<<"\n";
			// }
			// cout<<"\n";
			// for(int j=0;j<8;j++){
				// cout<<q[j][0]<<" "<<q[j][1];
			// cout<<"\n";
			// }
			// cout<<"\n";
			for(int j=0;j<8;j++){
				for(int h=0;h<8;h++){
					if(j!=h && k[j][0] == k[h][0] && k[j][1] == k[h][1]){
						k[h][0] = xk;
						k[h][1] = yk;
					}
					if(j!=h && q[j][0] == q[h][0] && q[j][1] == q[h][1]){
						q[h][0] = xq;
						q[h][1] = yq;
					}
				}
			}
			for(int j=0;j<8;j++){
				for(int h=0;h<8;h++){
					if(k[j][0] == q[h][0] && k[j][1] == q[h][1]){
						count++;
					}
				}
			}
			cout<<count<<"\n";			
	}
}	