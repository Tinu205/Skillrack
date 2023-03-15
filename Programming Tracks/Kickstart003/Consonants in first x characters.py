a = input()
b = int(input())
consonats=0;
vowels=['a','e','i','o','u']
for i in range(len(a)):
    if i<b:
        if a[i] not in vowels:
            print(a[i],end="")
            consonats=1
if(consonats==0):
    print("-1")

