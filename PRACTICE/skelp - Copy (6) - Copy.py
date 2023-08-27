import sys
from sys import stdin, stdout 
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n,m,a=map(int,input().split(' '))
#m=(input().split(' '))
#a=(input().split(' '))
width=n//a
height=m//a
if a*width < n :
	width=width+1
if a*height < n :
	height=height+1	
dth=width*height
print(dth);
