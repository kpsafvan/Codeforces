import sys
from sys import stdin, stdout 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
arr=list(map(int,input().split('+')))
for i in range(0,len(arr)):
	for k in range(0,len(arr)):
		if(arr[i]<arr[k]) :
			temp=arr[i]
			arr[i]=arr[k]
			arr[k]=temp			

print(*arr,sep='+')
