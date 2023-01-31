a = int(input())
innings = []
first_innings=[]
second_innings=[]

for i in range(a):
    val = list(map(int,input().split()))
    innings.append(val)

for i in range(a):
    val = innings[i][0]
    value = innings[i][1]
    first_innings.append(val)
    second_innings.append(value)
    
first_average,second_average = float(sum(first_innings)/a),float(sum(second_innings)/a)

print("%.2f" %first_average)
print("%.2f" %second_average)