x,y = map(int,input().split())
a,b=x%10,y%10
if a<b:
    for i in range(a,b+1):
        print(i,end=" ")
else:
    for j in range(b,a-1,-1):
        print(j,end=" ")
