x = input()
count = 0
for letter in x:
    if letter.isupper():
        count+=1
    else:
        continue
print(count)