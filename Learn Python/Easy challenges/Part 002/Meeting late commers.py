time=[]
count=0

val = list(input().split())
for i in range(len(val)):
    value = list(map(int,val[i].split(":")))
    time.append(value)

for i in range(len(time)):
    if time[i][0]==10 and time[i][1]%10>0:#if the time is 10 checks if mins is greater than 1
        count+=1
    elif time[i][0]>10:#checks if hour is greater than 10
        count+=1

print(count)
