def checkdone() :
    for g in range(0,n):
        if a[g]!=0 :
            return 1
    return 0
def gright()  :
    if current>(n-2) :
        return current
    for i in range(current+1,n) :
        if a[i]>0 :
            s=i
            a[i]=a[i]-1
            for k in range(current,i) :
                print("R",end='')
            print("P",end='')
            break
    return s
def gleft() :
    if current == 0 :
        return current
    for i in range(current-1,-1,-1):
        if a[i]>0 :
            for l in range(i,current):
                    print("L",end='')
            a[i]=a[i]-1
            print("P",end='')
            break
    return i
current=0
flag=1     
n=int(input())
a=[]
a=list(int(num) for num in input().strip().split())[:n]
while flag==1 :
    if(checkdone()) :
        current=gright()
    if(checkdone()):
        current=gleft()
    flag=checkdone()
