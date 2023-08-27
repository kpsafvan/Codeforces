import sys
from sys import stdin, stdout 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
arr = get_string()
flag=1
arr2=''
if 'WUB' in arr :
	arr1=arr.replace('WUB',' ')
	flag=0	

d=0	
arr2=arr.replace('WUB',' ')
if flag ==0 :
	for i in range(0,len(arr1)) :
		if arr1[i] ==' ' and d == 0 :
			arr2=arr1.replace(' ','',1)
		if arr[i] != ' ' :
			d=1
			break	

print(arr2)
				
			