x = input()
li=[]
a=[]
for i in range(len(x)):
    if x[i]!="_":
        li.append(x[i])
    else:
        a=list(x[i:])
        break
nl = li[-1::-1]+a
print("".join(nl))