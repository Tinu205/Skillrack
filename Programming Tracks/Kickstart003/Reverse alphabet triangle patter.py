n = int(input())
alpha = ord('a')
for i in range(1,n+1):
    print("-"*(n-i),end="")
    for j in range(1,i+1):
        print(chr(alpha),end="")
        alpha-=1
    alpha+=(i+1)
    print()