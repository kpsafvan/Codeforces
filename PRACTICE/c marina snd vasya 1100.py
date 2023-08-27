import sys,string
from sys import stdin, stdout 
def get_ints(): return list(map(float, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip() 
n,t =map(int,input().split())
s1=get_string()
s2=get_string()
#print(n,t,s1,s2)
d=0
for i in range(n):
	if s1[i]==s2[i] :
		d=d+1
m=n-t
if 2*m >=n :
	sys.stdout.write("-1")
else :
	sys.stdout.write(str(s1[:m]))
	sys.stdout.write(str(s2[m:2*m]))
	for i in string.ascii_lowercase:
			if i not in s1 and i not in s2 :
				sys.stdout.write(i)
				break
	for k in range(1,m) :
		for i in string.ascii_lowercase:
			if i not in s1 and i not in s2 :
				sys.stdout.write(i)
				break
	

