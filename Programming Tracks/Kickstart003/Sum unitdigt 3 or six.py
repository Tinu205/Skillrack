
b=int(input())
a = list(map(int,input().split()))
sum = 0 
for i in range(0,len(a)):
    if a[i]%10 == 3 or a[i]%10==6:
        sum+=a[i]
if not sum:
    print("-1")
else:
    print(sum)