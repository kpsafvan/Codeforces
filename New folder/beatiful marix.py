import sys
import math
from sys import stdin, stdout 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =5
arr=[[0]*5]*int(n)
for i in range(0,n):
	arr[i] = get_ints()
for i in range(0,n):
	for k in range(0,n):
		if(arr[i][k]==1):
			stdout.write(str(abs(i-2)+abs(k-2)))
