import re
val= input()
ans = re.findall("[a-zA-Z0-9]",val)
print("".join(ans))