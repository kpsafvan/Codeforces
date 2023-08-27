import math 
t=int(input())

for i in range(0,t):
	n[i]=int(input())
	for k in range(0,n[i]) :
		s=input().split()
		a[i][k]=int(s)
for i in range(0,t):
	for h in range(0,n[i]-1) :
		for j in range(h+1,n[i]) :
			if a[i][h]==0 :
				break
		    if a[i][j]==0 :
		    	continue
			if (a[i][j]<0)&&(a[i][h]>0) :
				minus=min(abs(a[i][j]),a[i][h])
				a[i][h]-=minus
				a[i][j]+=minus
	sum=0;
	for kin range(0,n[i]):
		if(a[i][k]>0) :
			sum=sum+a[i][k]
	print(sum)	
