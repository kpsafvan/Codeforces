#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     std::unordered_set<int> h;

    // Inserting elements
    // hashSet.insert(10);
 	// convert to array with number of empty seats
 	// make it -1 first then add the number of seats available
 	// 1 alone add one rest is fine
 	// 2 in the middle is fine ends add one
 	// 3,4 in the middle add one in the end add one
 	// 5,6 in the middle add two in the end add two
 	// 7,8 in the middle add 
	// in the middle divide by 3 with int var
	// 5 is 2
	// 0100101001010
	// 1001001001
	// 10010010101
	// 010101-5
	// 0101001-6
	// 01001001-7 - 2
	// 010010101-8 - 3
	// 0100100101-9 - 3
 	// dont forget to add existying stufdents
 	
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int l,val;
   		cin>>l;
   		long count = 0;
   		char a[l];
   		int b[l];
   		
   		for(int j=0;j<l;j++){
   			b[j] = -1;
   		}
   		int curr=0,num = 0,flag = 0;
   		for(int j=0;j<l;j++){
   			cin>>a[j];
   			if(a[j] == '1'){
   				count++;
   				if(curr>0){
   					b[num] = curr;
   					curr=0;
   					num++;
   				}
   				curr=0;
   				if(j==0 || j == l - 1){
   					num = num + 1;
   					// cout<<num<<"num ";
   				}
   			}
   			else{
   				curr++;
   			}
   		}
   		// cout<<count<<"count ";
   		// cout<<"curr"<<num;
   		if(curr>0){
   			b[num++] = curr;
   		}
   		// cout<<"curr"<<num;
   		for(int j=0;j<num;j++){
   			// cout<<b[j]<<" ";
   			if(b[j] == -1){
   				continue;
   			}
   			if((j==0 || j == num-1)){
   				count += (b[j] + 1)/3;
   			}
   			else{
   				count += (b[j])/3;
   			}
   			// cout<<(b[j])/3<<" ";
   		}
   		if(count == 0){
	   			count = (l+2)/3; 
	   	}
   		// cout<<"\n";
   			// cout<<"\n";
   		cout<<count<<"\n";
   	}
}