x = input()
vow = "aeiouAEIOU"
count=0
for i in x:
    if i in vow:
        print(i,end="")
        count = 1
if (count ==1):
    pass
else:
    print("-1")