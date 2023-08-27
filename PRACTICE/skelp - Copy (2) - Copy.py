import sys
from sys import stdin, stdout 
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n =int(input())
a=[0]*int(n)
b=[0]*int(n)
for i in range(0,n):
	a[i] = int(input())
	b[i] = int(input())
	flag=0
	if a[i]==1 :
		if b[i] %2 ==0 :
			stdout.write("2\n")
		else :
			stdout.write("1\n")
	elif a[i]%2==0 :
		while b[i]>0 :
				if b[i]%2==0 :
					stdout.write("2\n")
					flag=1
					break
				b[i]//=100
		if flag==0 :
			stdout.write("1\n")
	else :
		while(b[i]>0) :
			if b[i]%2!=0 :
				stdout.write("1\n")
				flag=1
				break
			b[i]//=100
		if flag == 0 :
			stdout.write("2\n")
		
		
	
