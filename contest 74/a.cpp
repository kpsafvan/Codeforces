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
   		int n;
   		cin>>n;
   		int a[n];
   		int max;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			//find the max element
   			if(a[j] == n)
   				max = j;
   		}
   		int left = max, right = max, num = n;
   		while(1){
   			num--;
   			if(left>0){
   				if(a[left-1] == num){
   					left--;
   					continue;
   				}
   			}
   			if(right < n - 1){
   				if(a[right+1] == num){
   					right++;
   					continue;
   				}
   			}
   			break;
   		}
   		// cout<<"ri "<<right<<" le "<<left<<" max "<<max<<"\n";
   		if(left==0 && right == n-1){
   			cout<<"YES\n";
   		}
   		else{
   			cout<<"NO\n";
   		}
   	}
}