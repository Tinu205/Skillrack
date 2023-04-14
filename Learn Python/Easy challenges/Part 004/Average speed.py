data = list(input().split())
speed_time = []
speed = []
distance = []

for i in range(len(data)):
    b = list(map(int,data[i].split("@")))
    speed_time.append(b)

for i in range(len(speed_time)):
    vel = speed_time[i][0]
    speed.append(vel)
    dis = speed_time[i][1]
    distance.append(dis)
a = sum(speed)/sum(distance)
print("%.2f"%a)
