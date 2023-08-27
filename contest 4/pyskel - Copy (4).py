import sys
from sys import stdin, stdout	 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
t =int(input())
arr=[[0]*int(t)]*100
n=[0]*t
for i in range(0,t):
	n[i]=int(input())
	arr[i] = get_ints()
for i in range(0,t):
	for k in range(0,n[i]):
		for j in range(k,n[i]) :
			if arr[i][k]> arr[i][j] :
				temp = arr[i][k]
				arr[i][k]=arr[i][j]
				arr[i][j]=temp
	if arr[i][0] > 0 :
		stdout.write('0')
	else :
		ma=n[i]
		for k in range(0,n[i]) :
			if k not in arr[i] :
				ma=k +1
				break
		current=0			
		for k in range(0,n[i]//2) :
			if arr[i][2*k]== k and arr[i][(2*k)+1] ==k:
				current=current + 2
			if  arr[i][2*k]==k and arr[i][(2*k)+1] !=k:
				current=current + 1
				break
		
		stdout.write(str(max(current,ma)))

		stdout.write('\n')		
					
								 			







	
