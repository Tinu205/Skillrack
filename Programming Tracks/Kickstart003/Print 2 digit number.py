x = int(input())
y=list(map(str,input().split()))
count=0
for i in range(x-1,-1,-1):
    if len(y[i])==2:
        print(y[i],end=" ")
        count = 1
if count:
    pass
else:
    print("-1")