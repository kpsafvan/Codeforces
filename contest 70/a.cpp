#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		char a[10];
   		for(int j=0;j<10;j++)
   			cin>>a[j];
   		//for each index the smallest number but larger than 10 - n
   		for(int j=0;j<9;j++){
   			int min=a[j] - '0',index=-1;
   			for(int k=j+1;k<10;k++){
   				if(a[k]-'0'>=(9-j) && a[k] - '0' < min){
   					min = a[k] - '0';
   					index = k;
   				}
   			}
   			if(index!=-1){
   				//cout<<"as";
   				char temp = a[j];
   				a[j] = a[index];
   				a[index] = temp;
   			}
   			
   		}
   		// std::sort(a, a + 10);
   		for(int j=0;j<10;j++){
   			cout<<a[j];
   		}
   		cout<<"\n";
   	}
}