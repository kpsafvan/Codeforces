n=int(input())
a=[]
b=[]
for i in range(0,n):
	s=input()
	a.append(s)
for i in range(0,n):
		if len(a[i]) > 10 :
		
			b.append(a[i][0]+str(len(a[i])-2)+a[i][len(a[i])-1])
		#	a[i][1:3]=len(s)
			#a[i][3]=s[len(s)-1]	
		else :
			b.append(a[i])	
print(*b,sep='\n')			