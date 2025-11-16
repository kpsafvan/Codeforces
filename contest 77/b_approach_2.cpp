#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::unordered_set<int> hash;
    long long i,t;
   	cin>>t;
   	//start from each point and execute, if end max value checker
   	//put visited in hash, if it comes infinite -1 and exit loop
   	
   	//approach two
   	// if symbol leads to * or two star, then -1
   	// if >< then -1
   	// else count the largest contuinues of > or <
   	for(i=0;i<t;i++)
   	{
   		int n,m;
   		string s;
   		cin>>s; 	
   		int len = s.length();
   		int count =0,max =0;
   		bool inf = false;	
   		if(len == 1){
   			cout<<"1\n"; 
   			continue;
   		}
   		for(int j=0;j< len -1; j++){
   			if(s[j] == '>' && s[j+1] == '*'){
   				inf = true;
   			}
   			else if(s[j] == '>' && s[j+1] == '<'){
   				inf = true;
   			}
   			else if(s[j] == '*' && s[j+1] == '<'){
   				inf = true;
   			}
   			else if(s[j] == '*' && s[j+1] == '*'){
   				inf = true;
   			}
   		}
   		for(int j=len -1;j>0; j--){
   			if(s[j] == '<' && s[j-1] == '*'){
   				inf = true;
   			}
   			else if(s[j] == '<' && s[j-1] == '>'){
   				inf = true;
   			}
   			else if(s[j] == '*' && s[j-1] == '>'){
   				inf = true;
   			}
   			else if(s[j] == '*' && s[j-1] == '*'){
   				inf = true;
   			}
   		}
   		
   		if(inf == true){
   			cout<<"-1\n"; 
   		}
   		else{
   			for(int j=0;j< len; j++){
   				if(s[j] == '<'){
   					count++;
   				}
   				if(s[j] == '*'){
   					count++;
   					break;
   				}
   			}
   			max = count;
   			count =0;
   			for(int j=len -1;j>=0; j--){
   				if(s[j] == '>'){
   					count++;
   				}
   				if(s[j] == '*'){
   					count++;
   					break;
   				}
   			}
   			if(count > max){
   				max = count;
   			}

   			cout<<max<<"\n"; 
   		}
   	}
}