a = input()
data = list(a)
empt=""
add,sub,mul,div = "aA","sS","mM","dD"
for val in range(len(data)):
    if data[val].isdigit() or data[val]=="-":
        empt+=data[val]
    else:
        first = int(empt)
        operand = data[val]
        second = data[val+1:]
        second =int("".join(second))
if operand in add:
    print(first+second)
elif operand in sub:
    print(first-second)
elif operand in mul:
    print(first*second)
else:
    print(int(first/second))
