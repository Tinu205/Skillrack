a = int(input())
if a>0:
    print(f"-{a}")
elif a==0:
    print(0)
else:
    a = str(a)
    print(f"{a[1:]}")
