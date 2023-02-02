a = input().split()
carlist = []
milagelist=[]
floatlist=[]

for i in range(len(a)):
    value = a[i].split("@")
    carlist.append(value)

for i in range(len(a)):
    value = carlist[i][1]
    milagelist.append(value)

for i in range(len(a)):
    value = float(milagelist[i])
    floatlist.append(value)
minindex = floatlist.index(min(floatlist))
print(carlist[minindex][0])