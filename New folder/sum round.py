import sys
import random
import math
from sys import stdin, stdout 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =int(input())
a=[0]*int(n)
for i in range(0,n):
	a[i] = int(input())
	
for i in range(0,n):
	k=0
	s=[0]*5
	d=0
	while a[i] >0 :
		if a[i] %10 == 0 :
			a[i]//=10
			d+=1
		else :
			s[k]=a[i]%10*(10**d)
			a[i]//=10	
			k+=1
			d+=1
	print(k)
	print(*s[:k])
	
	
	#for k in range(a[i]) :
	#	stdout.write(str(str(s)+' '))
	#print()
