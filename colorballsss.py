def checkcase() :
 s=0
 u=2
 for i in range(0,n):
	 for k in range(0,4):
		  if(a[i][k]%2==1) :
		   s=s+1
		  if s<=1 :
		   return 1
 return 0
n=int(input())
a = [[0]*n]*4
for i in range(0,n):
	 r,g,b,w = map(int,input().split())
print(checkcase(a,n,2))
print(a)	
