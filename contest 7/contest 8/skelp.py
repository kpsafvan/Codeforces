import sys
from sys import stdin, stdout 
def sum(a) :
	sum=0
	for k in range(len(a)) :
		sum+=a[k]
	return sum	
def large(a) :
	sum=0
	for k in range(len(a)) :
		if sum<a[k] :
			sum=a[k]
			pos=k
	return pos	
	
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =int(input())
a=[1]
for i in range(0,n):
	s=int(input())
	move =0
	while(sum(a)<s) :
		move=move+1
		a[-1]+=1
		if(sum(a)<s):
			move=move+1
			a.append(a[-1])
	print(move)	
	print(a)
		

