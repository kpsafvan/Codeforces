import sys
from sys import stdin, stdout 
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =int(input())
for i in range(0,n):
	a = get_string()
	print(len(a))
