import sys
from sys import stdin, stdout 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
t =int(input())
for i in range(t):
	n=int(input())
	m=get_ints()
	l=set(m)
	x=n-len(l)
	#print(x,"a")
	if x % 2 > 0 :
		print(len(l)-1)
	else :	
		print(len(l))
	