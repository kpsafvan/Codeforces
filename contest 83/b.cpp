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
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		// int l,a,b,n,k,count = 0,max = 0;
   		
   		int a,b;
   		cin>>a>>b;		 
   		
   		//compute both, starting with dark and starting with white
   		int val =0,count=0;
   		
   		// while(c<a && d<0){
//    			
   		// }
   		//in dp - array index raised by 2 is cream needed for that
   		long long mem[1000];
   		mem[0] = 1;
   		mem[1] = 2;
   		//check initial condition
   		int iter = 2;
   		while(true){
   			mem[iter] = mem[iter-2] + std::pow(2, iter);
   			// cout<<mem[iter]<< " ";
   			if(iter % 2 == 0){
   				if(mem[iter] > a){
   					val = iter-1;
   					break;
   				}
   			}
   			else{
   				if(mem[iter] > b){
   					val = iter-1;
   					break;
   				}
   			}
   			iter++;
   		}
   		
   		iter = 2;
   		count = val;
   		while(true){
   			mem[iter] = mem[iter-2] + std::pow(2, iter);
   			if(iter % 2 != 0){
   				if(mem[iter] > a){
   					val = iter-1;
   					break;
   				}
   			}
   			else{
   				if(mem[iter] > b){
   					val = iter-1;
   					break;
   				}
   			}
   			iter++;
   		}
   		
   		if(val > count){
   			count = val;
   		}
   		
   		int cc = 0;
   		// cout<<"\n";
   		// while(cc < count+2){
   			// cout<<cc<<"-"<<mem[cc]<<" ";
   			// cc++;
   		// }
   		// cout<<"\n";
   		
   		if(a==1 && b==1){
   			count =0;
   		}
   		else if(a==1 || b==1){
   			count = 1;
   		}
   		cout<<count+1<<"\n";
   	}
}