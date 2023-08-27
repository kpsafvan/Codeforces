import sys
from sys import stdin, stdout 
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n=int(input())
s=0
for i in range(1,n+1):
	s=s+(1/i)
print(s)	