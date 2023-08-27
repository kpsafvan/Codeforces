import sys
from sys import stdin, stdout 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =int(input())
arr=[0]*n
arr[i] = get_ints()
for i in range(0,n):
	for k in range(i,n):
		if arr[i]>arr[k] :
			temp=arr[k]
			arr[k]=arr[i]
			arr[i]=temp
			
			
