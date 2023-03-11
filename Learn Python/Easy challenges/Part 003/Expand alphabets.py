a = input()

def sep(a):
    arr=[]
    empt=""
    for val in a:
        if val.isdigit():
            value = val
            empt+=value
        else:
            arr.append(empt)
            arr.append(val)
            empt=""
    return arr

tot = sep(a)

numb = []

for i in range(len(tot)):
    if i%2==0:
        numb.append([int(tot[i]),tot[i+1]])

for val in range(len(numb)):
    print(numb[val][0]*numb[val][1],end="")
