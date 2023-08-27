#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int num,x;
	cin>>x;
	if(x%5==0)
	num=x/5;
	else
	num=x/5+1;
	cout<<num;
}	