x = int(input())
b = list(map(int,input().split()))
c = int(input())
newlist = b[-c:]
print(" ".join(str(val) for val in newlist))