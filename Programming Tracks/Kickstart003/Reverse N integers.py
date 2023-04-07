x = int(input())
y = list(map(int,input().split()))
for i in range(1,x+1):
    print(y[-i],end=" ")