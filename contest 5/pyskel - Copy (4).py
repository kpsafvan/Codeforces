import sys
from sys import stdin, stdout 
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =int(input())
a=[[0]*3]*int(n)
for i in range(0,n):
	a[i] = get_ints()

	#sticksneed=(a[i][1]*a[i][2])+(a[i])
	
	#value=((a[i][2]*a[i][1])//(a[i][0]-1))+(a[i][2]//(a[i][0]-1))
	if a[i][0]%a[i][2]==0 :
		value=(((2*a[i][2]*a[i][1])+(a[i][2]))//(a[i][0]-1))
	else :
		value=(((2*a[i][2]*a[i][1])+(a[i][2]))//(a[i][0]-1))	
	#elif (((a[i][1]*a[i][2])+a[i][2])%a[i][1])!=0 :
		
		#value=(((2*a[i][2]*a[i][1])+(a[i][2]))/(a[i][0]-1))	
	#value=value+(((a[i][2]*a[i][1])//(a[i][0]-1)))
	stdout.write(str(int(value)))
	print()
