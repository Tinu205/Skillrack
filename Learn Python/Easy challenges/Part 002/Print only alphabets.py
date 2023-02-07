a = input()
for i in range(len(a)):
    if(a[i].isalpha()):
        print(a[i],end="")
    else:
        continue