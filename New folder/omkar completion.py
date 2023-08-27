import sys
import random
from sys import stdin, stdout 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =int(input())
a=[0]*int(n)
for i in range(0,n):
	a[i] = int(input())
for i in range(0,n):
	s = 1
	for k in range(a[i]) :
		stdout.write(str(str(s)+' '))
	print()
