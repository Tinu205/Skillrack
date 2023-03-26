a = input().strip()
b = input().strip()
if(len(a)>len(b)):
    print(a)
elif(len(b)>len(a)):
    print(b)
else:
    print(f"{a}\n{b}")
