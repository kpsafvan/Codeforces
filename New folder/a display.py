import sys
from sys import stdin, stdout 
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
t =int(input())
a=[0]*int(t)
for i in range(0,t):
	a[i] = int(input())
	if a[i] == 3 :
		stdout.write("7")
	elif a[i] % 2 ==0 :
		for k in range(0,a[i],2)  :
			stdout.write("1")
	else : 
		stdout.write("7")
		for k in range(0,a[i]-3,2) :
			stdout.write("1")
	stdout.write("\n")		
			
					
