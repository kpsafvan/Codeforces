import sys
from sys import stdin, stdout 	
def check() :
	for i in range(0,n[j]-1):
		if a[j][i] != a[j][i+1] :
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
t=int(input())
a=[[0]*t]*100
n=[0]*t
for i in range(0,t) :
	a[i] =list(map(int,get_string()))
	n[i]=len(a[i])
aw=0
#while n > 0 :
s=0
for j in range(0,t):
	for i in range(0,n[j]-1):
		if a[j][i] != a[j][i+1] :
			s=s+1
			for k in range(i,n[j]) :
				a[j][i]=a[j][i+1]
				n[j]=n[j]-2	
			for u in range(0,n[j]):
				print(a[j][u],sep=' ')	
			
	