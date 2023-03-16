a = input()
b = input()
count=0
for i in range(len(a)-1):
    if a[i]+a[i+1] == b:
        count+=1
    else:
        continue
print(count)