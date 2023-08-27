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
	s=2**a[i]
	for k in range(1,(a[i]//2)) :
		s+=2**k
	s1=0
	for k in range(a[i]//2,a[i]) :
		s1+=2**k	
	stdout.write(str(abs(s-s1)))	
	stdout.write("\n")	
	
	
	#s1=[2**ele for ele in range(1,(int(a[i]/2)+1))]
	#s2=[2**ele for ele in range((int(a[i]/2)+1),(a[i]+1))]
	#print(s1,s2)
	
	#while f=1 :	
	#	sum1=0
	#	sum2=0
	#	for j in range(0,a[i]//2):
	#		sum1+=s1[j]
	#		sum2+=s2[j]
	

		
	
	#print(sum1,' ',sum2)	
		
	
	
	
	
	#for k in range(a[i]) :
	#	stdout.write(str(str(s)+' '))
	#print()
