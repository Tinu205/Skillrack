count = int(input())
Student_score=[]
score_list= []
total_score=[]

for i in range(count):
    data = input().split(":")
    Student_score.append(data)

for j in range(len(Student_score)):
    scores = Student_score[j][1:]
    score_list.append(scores)

for k in range(len(score_list)):
    for l in range(3):
        score_list[k][l]=int(score_list[k][l])

for m in range(len(score_list)):
    tot = sum(score_list[m])
    total_score.append(tot)

max_score = max(total_score)
max_index = total_score.index(max_score)

print(Student_score[max_index][0])