t=int(input())
for i in range(t):
	n=int(input())
	a=[0]*n
#	a=list(map(int,input()))
	a=list(map(int,input().strip().split()))[:n]
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