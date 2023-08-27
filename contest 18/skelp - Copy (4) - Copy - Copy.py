import sys,math
from sys import stdin, stdout 
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =int(input())
a=[[0]*3]*int(n)
rc=0
lc=0
rs=0
ls=0
tot=0
for i in range(0,n):
	a[i] = get_string()
	for k in range(0,len(a[i])):
		if(a[i][k]=='(') :
			lc=lc+1
		if(a[i][k]==')') :
			rc=rc+1
		if(a[i][k]=='[') :
			ls=ls+1
		if(a[i][k]==']') :
			rs=rs+1
	tot=min(rs,ls)+min(rc,lc)
	print(tot)
	tot=0	
	rc=0
	lc=0
	rs=0
	ls=0
						
			

