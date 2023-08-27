import sys
from sys import stdin, stdout 
def lucky(a) :
	number=0
	while(a>0) :
		if a%10==7 or a%10==4 :
			number=number+1
		a=a//10
	if number==7 or number ==4 :
		print("YES")
	else :
		print("NO")	
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
a =int(input())
lucky(a)
#for i in range(0,n):
#	stdout.write(str(arr[i]))
