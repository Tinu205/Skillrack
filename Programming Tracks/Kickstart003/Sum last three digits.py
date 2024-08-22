a=int(input())
sum=0
for i in range(1,4):
    b=(int(a%10))
    sum+=b
    a=int(a/10)
print(sum)