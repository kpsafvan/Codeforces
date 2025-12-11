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
   		long long a,b,k;
   		cin>>a>>b>>k;
   		long long count = 2;
   		if(a <= k && b <= k || a==b){
   			count = 1;
   		}
   		else{
   			if(a > b){
   				long long m = a;
   				a = b;
   				b = m;
   			}
   			//Divide larger one and get ratio
   			//get decimal part,divide by 1
   			// //ratio is that number : number * original quotient
   			// float q = (float)b/a;
   			// float s = (float)1/(q - (long long)q);
   			// long long w = s;
   			// float l = w;
   			// if(l == s && (float)s * q <= k){
   				// count = 1;
   			// }
   			// cout<<q<<" "<<s<<" \n";
   			// cout<<l<<" "<<s<<"\n";
   			long long g = __gcd(a, b);
            long long dx = a / g;
            long long dy = b / g;
            if(dx <= k && dy <= k){
                count = 1;
            }
   			
   		}
   		cout<<count<<"\n";
   	}
}