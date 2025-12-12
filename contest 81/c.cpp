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
   		int n,even = 0;
   		cin>>n;
   		int a[n];
   		
   		for(int j=0;j<n;j++){
	   		cin>>a[j];
	   		if(a[j] %2 ==0){
	   			even++;
	   		}
	   	}
	   	int e[even],o[n-even],ep=0,op=0;
	   	for(int j=0;j<n;j++){
	   		if(a[j] %2 ==0){
	   			e[ep++] = a[j];
	   		}
	   		else{
	   			o[op++] = a[j];
	   		}
	   	}
	   	sort(e,e+even, std::greater<int>());
	   	sort(o,o+(n-even), std::greater<int>());
	   	// for(int j=0;j<even;j++){
	   		// cout<<e[j]<<" ";
	   	// }
	   	// cout<<"\n";
	   	// for(int j=0;j<n-even;j++){
	   		// cout<<o[j]<<" ";
	   	// }
	   	// cout<<"\n";
	   	
	   	//Put even and odd into two arrays
	   	//Get one each for N
	   	//If it becomes zero, from then onwards start again, becomes zero when polarity can't
	   	//be switched
	   	//realisation
	   	//Get one max odd, then all even ones
	   	//After even finishes
	   	//if there are more than 1 + even number to be selected, select minimum values
	   	//give to cat
	   	//that is, remove all small even numbers and odd numbers then give one max odd plus max even
	   	//lets assume it goes to zero only once other than for Nth case
	   	
	   	long long val = 0;
	   	int oddP=0,evenP=0;
	   	for(int j = 1;j<=n;j++){
	   		if(n == even){
	   			cout<<"0 ";
	   		}
	   		else{
		   		if(val == 0 && oddP < n-even){
		   			//oddP < n-even edge case needs to be printed, when no odd is there - 0
		   			cout<<o[oddP]<<" ";
		   			val +=o [oddP++];
	   			}
	   			else if(val > 0 && evenP < even){
	   				val += e[evenP++];
	   				cout<<val<<" ";
	   			}
	   			else if(val > 0 && evenP == even){
	   				val = 0;
	   				if(n-even> (j - even)/2){
	   					for(int h = 0;h < evenP - ((j - even)/2) ;h++){
	   						val += e[h];
	   					}
	   					evenP -= j - even - 1;
	   					//some condition here
	   					//total odd > 
	   					if(!(j-even %2 ==0) ){
	   						val += o[0];	
	   					}	
	   				}
	   				cout<<val<<" ";
	   			}
	   			else{
	   				cout<<"0 ";
	   			}
	   		}	
	   	}
	   	
	   	cout<<"\n";
	   	
   		// cout<<"\n"<<1<<"\n";
   	}
}