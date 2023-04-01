a = int(input())
b = list(map(int,input().split()))
c = int(input())
d = b.index(c)
newlist = b[d:]
print(" ".join(str(i) for i in newlist))