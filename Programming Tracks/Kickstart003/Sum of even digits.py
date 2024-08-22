a = int(input())
sum =0
while a>0:
    temp = a % 10
    if temp%2 == 0:
        sum+=temp
    a//=10
print(sum)
