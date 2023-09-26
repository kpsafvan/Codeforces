 #include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	//Dynamic attempt
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,t,j;
   	cin>>t;
   	string s ;
   	for(j=0;j<t;j++){
		cin>>s;
	
	long long a[s.length()],count=0;
	if(s[0]=='1'){
		a[0]=1;
		count=1;
	}
	else{
		a[0]=0;
	}
	
	for(int i=1;i<s.length();i++){
		if(s[i]=='1'){
			a[i]=a[i-1]+1;
		}
		else{
			a[i]=0;
		}
		if(a[i]>count){
			count=a[i];
		}
	}
 
	if(s[0]=='1'&&s.length()>1&&count<s.length()){
		a[0]=a[s.length()-1]+1;
		if(a[0]>count){
			count=a[0];
		} 
			for(int i=1;i<s.length();i++){
			if(s[i]=='1'){
				a[i]=a[i-1]+1;
			}
			else{
				break;
			}
			if(a[i]>count){
				count=a[i];
			}
		}
	} 
		long long num=0;
	
	if(count==s.length()){
		num=s.length()*s.length();
	}
	else if(count>2){
		for(int i=0;i<count;i++){
			if((count-(i))*(i+1)>num){
				num=(count-(i))*(i+1);
			}
			else{
				break;
			}
		}
	}
	else{
		num=count;
	}
	
	cout<<num<<"\n";
		}
	
     
 
}