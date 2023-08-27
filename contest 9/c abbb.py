import sys
from sys import stdin, stdout 
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =int(input())
a=[[0]*3]*int(n)
for i in range(0,n):
	a[i] = get_string()
print(len(a[0]))	
