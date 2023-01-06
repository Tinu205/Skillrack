a = input()
if a=="z":
    print("ya")
elif a=="a":
    print("zb")
else:
    print("".join(f"{chr(ord(a)-1)}{chr(ord(a)+1)}"))