import sys
from sys import stdin, stdout 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
t =int(input())
for i in range(t):
	n=int(input())
	a = get_ints()
	m=0
	float(m)
	for j in range(0,n-1):
		for k in range(j+1,n):
			s=max(a[j:k+1])*min(a[j:k+1])
			if m<s :
				m=s;
			#	print(a[j:k+1])
			#	print(j,k,m,min(a[j:k]),max(a[j:k]));
	print(m)
	