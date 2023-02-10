a = int(input())
list_of_batsman = []
list_of_score=[]

for i in range(a):
    a = input().split(",")
    list_of_batsman.append(a)

for i in range(len(list_of_batsman)):
    list_of_score.append(list_of_batsman[i][1])

list_of_score = [int(val) for val in list_of_score]
max_score = max(list_of_score)
max_score_index = list_of_score.index(max_score)
print(list_of_batsman[max_score_index][0])