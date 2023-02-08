num = int(input())
flag = False

if num == 1:
    print("NO")
elif num > 1:
    for i in range(2, num):
        if (num % i) == 0:
            flag = True
            break
    if flag:
        print("NO")
    else:
        print("YES")