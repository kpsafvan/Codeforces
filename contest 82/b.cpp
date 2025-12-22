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
   		int c;
   		cin>>c;
   		string a,b;
   		for(int k =0;k<c;k++){
   			cin>>a;	
	   		// cout<<"s ";
	   		
	   		for(int j=0;j<a.length();j++){
	   			// cout<<b<<"s ";
	   			// int comp =  std::min(j,b.length());
	   			int comp = 0;
	   			if (b.length() > 1) {
				    comp = j % (b.length() - 1);
				}
	   			// int s = (comp-1) % j;

	   			// cout<<s<<" ";
	   			if(b[comp] - 'a' < a[j] - 'a'){
	   				b = b + a;
	   				a= "";
	   				break;
	   			}
	   		} 
	   		if(a != ""){
	   			string d = a;
	   			d = d + b;
	   			b = d;
	   		}	   		
   		}
   		cout<<b<<"\n";
   	}
}