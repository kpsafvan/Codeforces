#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,t,j,m,l,h;
   	cin>>t;
   	string s ;
   	for(j=0;j<t;j++){
		cin>>s;
		
		//Find number of consicutive string , -1 multiply by 2
		int count=0,tcount=0;;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				tcount++;
			}
			else{
				tcount=0;	
			}
			if(i==0&&s[0]=='1'){
				if(s[s.length()-1]=='1'){
					if(s.length()!=1)
					tcount++;
				}
			}
			if(tcount>count){
				count=tcount;
			}
		} 
		
		if(count<3){
			cout<<count<<"\n";
		}
		else{
			int num = ceil(count/2);
			cout<<count<<" ss "<<num<<" s ";
		cout<<(count-num)*num<<"\n";
		}
	}	
}