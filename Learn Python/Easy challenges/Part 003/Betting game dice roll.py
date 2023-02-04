faces = list(map(int,input().split()))
gain = int(input())
loss = int(input())
gain_count,loss_count=0,0
for i in range(len(faces)):
    if faces[i]%2==0:
        loss_count+=1
    else:
        gain_count+=1
print(gain*gain_count-loss*loss_count)