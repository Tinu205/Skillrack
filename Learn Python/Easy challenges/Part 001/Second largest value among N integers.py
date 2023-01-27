x = int(input())
l=[]
for i in range(x):
    a = int(input())
    l.append(a)
l.sort()
print(l[-2])