s=list(input())
a=''
vowels=["A", "O", "Y", "E", "U", "I","a","e","i","o","u","y"]
for i in range(0,len(s)) :
	if s[i] not in vowels :
		a=a+'.'
		a=a+s[i]
a=a.lower()		
print(*a,sep='')