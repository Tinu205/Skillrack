a = int(input())
tmp = 0
for i in range(a):
    for j in range(1,a+1):
        if i == 0 or i == a-1:
            tmp+=1
            print(tmp,end=" ")   
        elif j == 1 or j == a:
            tmp+=1
            print(tmp,end=" ")
        else:
            print("* ",end="")
    print()