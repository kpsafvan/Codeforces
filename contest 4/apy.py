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
		stdout.write('\n')
	else :
		s=0
		flag=1
		for y in range(0,n[i]//2) :
			for r in range(0,n[i]-2) :
				if arr[i][r]==arr[i][r+2]  :
					for o in range(r,len(arr[i])-1):
						arr[i][o]=arr[i][o+1]
					s=s+1
				if arr[i][r]==arr[i][n[i]-1]:
					flag=0
					break
			if flag==0:
					break			

		n[i]=n[i]-s			
		for k in range(0,n[i]+1) :
			if k > arr[i][n[i]-1] :
				ma=arr[i][n[i]-1]+1
				break
			if k not in arr[i] :
				ma=k +1
				break	
		current=0			
		for k in range(0,n[i]//2) :
			if arr[i][2*k]== k and arr[i][(2*k)+1] ==k:
				current=current + 2
			if  arr[i][2*k]==k and arr[i][(2*k)+1] !=k:
				for u in range((k),n[i]) :
					if u in arr[i] :
						current=current+1
					else :
						break
				break			
		stdout.write(str(max(current,ma)))

		stdout.write('\n')		
					
								 			







	
