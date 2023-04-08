a = input().strip()
occurance =0
for i in range(len(a)-1,-1,-1):
    if int(a[i])%2!=0:
        print(a[i],end="")
        occurance=1
    else:
        continue
if(not occurance):
    print("-1")
else:
    pass