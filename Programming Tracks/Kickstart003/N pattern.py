a,b = input().split()
a = int(a)
for i in range(1,a+1):
    for j in range(1,a+1):
        if j == 1 or j == i or j == a:
            print(b,end="")    
        else:
            print("-",end="")
    print()
