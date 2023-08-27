from sys import stdin, stdout 
n = stdin.readline()
arr=[[0]*int(n)]*100
for i in range(0,int(n)):
	arr[i] = [int(x) for x in stdin.readline().split()]
for i in range(0,int(n)):
	stdout.write(str(arr[i]))
	